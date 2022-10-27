#include "PortableEquipment.h"


PortableEquipment::PortableEquipment(std::string const& name, uint16_t const weight, float const price, uint16_t const batteryLife,
	uint16_t const RAM, uint16_t const ROM, std::string const& CPU, std::string const& GPU) :
	IElecntonicDevice(name, weight, price), _batteryLife(batteryLife), _RAM(RAM), _ROM(ROM),
	_CPU(CPU), _GPU(GPU) {};


void PortableEquipment::ShowStats() const
{
	cout
		<< "Name: " << _name << endl
		<< "Weight: " << _weight << "kg" << endl
		<< "Price: $" << _price << endl
		<< "BattetyLife: " << _batteryLife << " hours" << endl
		<< "RAM: " << _RAM << " GB" << endl
		<< "ROM: " << _ROM << " GB" << endl
		<< "CPU: " << _CPU << endl
		<< "GPU: " << _GPU << endl;
}