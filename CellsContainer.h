#pragma once
#include <vector>
class CellsContainer
{
public:
	std::vector<int*> cells;
	CellsContainer();
	CellsContainer(std::vector<int*> cells);
	bool oneEmptySpace();
	//CellsContainer operator[](int digit) {

	//}
};

