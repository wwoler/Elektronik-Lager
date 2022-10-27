#pragma once
#include "IElecntonicDevice.h"

class HouseholdEquipment : virtual public IElecntonicDevice
{
public:
	HouseholdEquipment(std::string const& name, uint16_t weight, float price, std::string const& powerunit, uint16_t Hz);
	void ShowStats() const override;

protected:
	std::string  _powerSupplyUnit;
	uint16_t     _Hz;
};
