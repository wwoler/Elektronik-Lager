#pragma once
#include <stdio.h>
#include <stdint.h>
#include <string>
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


class IElecntonicDevice
{
public:
	IElecntonicDevice(std::string const& name, uint16_t weight, float price);

	virtual void ShowStats() const = 0;
	virtual ~IElecntonicDevice() = default;

protected:
	std::string  _name;
	uint16_t     _weight;
	float        _price;

};
