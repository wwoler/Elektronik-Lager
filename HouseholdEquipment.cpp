#include "HouseholdEquipment.h"

HouseholdEquipment::HouseholdEquipment(std::string const& name, uint16_t weight, float price,
	std::string const& powerunit, uint16_t Hz) : IElecntonicDevice(name, weight, price),
	_powerSupplyUnit(powerunit), _Hz(Hz) {}

void HouseholdEquipment::ShowStats() const
{
	cout 
		<< "Name: " << _name    << endl
		<< "Weight: " << _weight << endl
		<< "Price: $" << _price  << endl
		<< "Power Unit: " << _powerSupplyUnit << endl
		<< "Hz: " << _Hz         << endl;
}
