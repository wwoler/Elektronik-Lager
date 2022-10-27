#include "ElectronicLager.h"

auto main() -> int
{
	ElectronicLager* electronicLager = new ElectronicLager;
	electronicLager->initLager();
	electronicLager->ChooseAndShowType();

	delete electronicLager;

	return EXIT_SUCCESS;
}