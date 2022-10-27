#pragma once
#include "IElecntonicDevice.h"

class PortableEquipment : virtual public IElecntonicDevice
{
public:
	PortableEquipment(std::string const& name, uint16_t const weight, float const price, uint16_t const batteryLife,
		uint16_t const RAM, uint16_t const ROM, std::string const& CPU, std::string const& GPU);

	void ShowStats() const override;

protected:
	uint16_t     _batteryLife;
	uint16_t     _RAM;
	uint16_t     _ROM;
	std::string  _CPU;
	std::string  _GPU;
};