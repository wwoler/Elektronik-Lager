#pragma once
#include <memory>
#include <vector>
#include "IElecntonicDevice.h"

class ElectronicLager final
{
public:
	enum types
	{
		households = 0,
		portables, 
		desktopPC
	};

	ElectronicLager() = default;
	void initLager();
	void addDevice(std::shared_ptr<IElecntonicDevice> const device);
	void showStatsOf(types const& type) const;
	void ChooseAndShowType() const;


private:
	std::vector<std::shared_ptr<IElecntonicDevice> > devices;

};