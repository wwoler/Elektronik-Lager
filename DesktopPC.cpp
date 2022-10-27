#include "DesktopPC.h"

DesktopPC::DesktopPC(std::string const& name, uint16_t weight, float price, uint16_t const batteryLife,
	uint16_t const RAM, uint16_t const ROM, std::string const& CPU,
	std::string const& GPU, std::string const& powerunit, uint16_t Hz) :
	IElecntonicDevice(name, weight, price), PortableEquipment(name, weight, price, batteryLife, RAM, ROM, CPU, GPU),
	HouseholdEquipment(name, weight, price, powerunit, Hz) {};


void DesktopPC::ShowStats() const
{
	cout
		<< "Name: " << _name << endl
		<< "Weight: " << _weight << endl
		<< "Price: $" << _price << endl
		<< "RAM: " << _RAM << " GB" << endl
		<< "ROM: " << _ROM << " GB" << endl
		<< "CPU: " << _CPU << endl
		<< "GPU: " << _GPU << endl
		<< "Power Unit: " << _powerSupplyUnit << endl
		<< "Hz: " << _Hz << endl;
}