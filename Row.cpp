#pragma once
#include "Row.h"
#include <iostream>

void Row::print()
{
	for (auto& i : this->cells) {
		std::cout << *i << ' ';
	}
	std::cout << std::endl;
}
//class Row : public CellsContainer {
//	
//};
