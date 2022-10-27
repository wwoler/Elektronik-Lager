#pragma once
#include "PortableEquipment.h"
#include "HouseholdEquipment.h"

class DesktopPC : public HouseholdEquipment, PortableEquipment
{
public:
	DesktopPC(std::string const& name, uint16_t weight, float price, uint16_t const batteryLife,
		uint16_t const RAM, uint16_t const ROM, std::string const& CPU,
		std::string const& GPU, std::string const& powerunit, uint16_t Hz);

	void ShowStats() const override;

};
