#include "IElecntonicDevice.h"

IElecntonicDevice::IElecntonicDevice(std::string const& name, uint16_t weight, float price) :
	_name(name), _weight(weight), _price(price) {};

