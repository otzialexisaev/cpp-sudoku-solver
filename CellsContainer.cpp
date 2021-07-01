#pragma once
#include "CellsContainer.h"
#include <vector>
CellsContainer::CellsContainer() {
	this->cells = std::vector<int*>(9, 0);
}

CellsContainer::CellsContainer(std::vector<int*> cells) {
	this->cells = cells;
}

bool CellsContainer::oneEmptySpace() {
	int empty{ 0 };
	for (int i = 0; i < this->cells.size(); i++)
	{
		if (this->cells[i] == 0) {
			empty++;
		}
		//std::cout << cells[i];
	}
	//std::cout << std::count(std::begin(cells), std::end(cells), 0);
	if (empty == 1) {
		return true;
	}
	return false;
}

