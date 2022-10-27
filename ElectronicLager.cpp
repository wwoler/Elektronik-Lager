#include "ElectronicLager.h"
#include "HouseholdEquipment.h"
#include "PortableEquipment.h"
#include "DesktopPC.h"
#include <typeinfo>

void ElectronicLager::initLager()
{
	addDevice(std::shared_ptr<IElecntonicDevice>(new HouseholdEquipment("LG monitor", 2, 100, "ADP-60UH (60W)", 144)));
	addDevice(std::shared_ptr<IElecntonicDevice>(new HouseholdEquipment("SAMSUNG monitor", 4, 130, "9V 4.74A 5pin ", 144)));
	addDevice(std::shared_ptr<IElecntonicDevice>(new PortableEquipment("iPad", 1, 500, 5, 4, 256, "A13 Bionic", "PowerVR GPU")));
	addDevice(std::shared_ptr<IElecntonicDevice>(new PortableEquipment("Xiaomi Pad", 2, 300, 8, 4, 256, "Qualcomm Snapdragon 860", "Qualcomm Adreno 640")));
	addDevice(std::shared_ptr<IElecntonicDevice>(new DesktopPC("Desktop PC", 5, 300, 24, 16, 512, "Intel Core i7-10700F OEM", "RTX 2080 SUPER GRP 8GB", "ADP-60UH (60W)", 144)));
}

void ElectronicLager::addDevice(std::shared_ptr<IElecntonicDevice> const device)
{
	devices.push_back(device);
}


void ElectronicLager::ChooseAndShowType() const
{
	cout << "Choose type of device you want to see(any other num to quit)\n"
		<< "1.households      |2.portables      |3.desktop PC\n";
	int choice; cin >> choice;
	while (choice != 0 && choice > 0 && choice < 4)
	{
		showStatsOf(ElectronicLager::types(choice - 1));
		cout << "Choose type of device you want to see(any other num to quit)\n"
			<< "1.households      |2.portables      |3.desktop PC\n";
		cin >> choice;
	}


}

void ElectronicLager::showStatsOf(types const& type) const
{
	switch (type)
	{
	case households:
	{
		uint16_t i = 1;
		system("cls");
		for (auto x : devices)
		{
			const type_info& ti = typeid(*x);
			if (dynamic_cast<HouseholdEquipment*>(x.get()) && ti.name() == typeid(HouseholdEquipment).name())
			{
				cout << '#' << i++ << "\n";
				x->ShowStats();
				cout << endl;
			}
		}
		break;
	}
	case portables:
	{
		uint16_t i = 1;
		system("cls");
		for (auto x : devices)
		{
			const type_info& ti = typeid(*x);
			if (dynamic_cast<PortableEquipment*>(x.get()) && ti.name() == typeid(PortableEquipment).name())
			{
				cout << '#' << i++ << "\n";
				x->ShowStats();
				cout << endl;
			}
		}
		break;
	}
	case desktopPC:
	{
		system("cls");
		uint16_t i = 1;
		for (auto x : devices)
		{
			const type_info& ti = typeid(*x);
			if (dynamic_cast<DesktopPC*>(x.get()) && ti.name() == typeid(DesktopPC).name())
			{
				cout << '#' << i++ << "\n";
				x->ShowStats();
				cout << endl;
			}
		}
		break;
	}

    }

}