#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

//struct Row {
//	int* cells;
//	bool oneEmptySpace() {
//		int empty{ 0 };
//		for (size_t i = 0; i < 9; i++)
//		{
//			if (cells[i] == 0) {
//				empty++;
//			}
//			//std::cout << cells[i];
//		}
//		//std::cout << std::count(std::begin(cells), std::end(cells), 0);
//		if (empty == 1) {
//			return true;
//		}
//		return false;
//	}
//
//	bool insertLastDigit() {
//		for (int i = 1; i <= 9; i++)
//		{
//			int* check = find(cells, cells + 9, i);
//			if (check != cells + 9) {
//				cout << i << " was found" << endl;
//			}
//			else {
//				*check - 1 = i;
//				cout << i << " was not found" << endl;
//			}
//		}
//		return true;
//	}
//};

//bool oneEmptySpace(vector<int> cells);
//bool insertLastDigit(vector<int> &cells);
//void printCells(vector<int> cells);
vector<int*> getCells();

int main()
{
	vector<int*> cells = getCells();
	//bool check = oneEmptySpace(cells);
	//insertLastDigit(cells);
	//printCells(cells);
	//Row row1{cells};
	//row1.oneEmptySpace();
	//row1.insertLastDigit();
}

vector<int*> getCells() {
	// Ячейки
	vector<int*> cells = { new int(1),new int(2),new int(3),new int(4),new int(5),new int(6),new int(7),new int(9),new int(0) };
	vector<int*> check;
	check.push_back(cells[0]);
	check.push_back(cells[1]);
	*check[0] = 5;
	*check[1] = 7;
	return cells;
}

/*
Выводит в консоль инфу о массиве из 9 элементов
*/
void printCells(vector<int> cells) {
	for (int i = 0; i < cells.size(); i++)
	{
		cout << "Index " << i << " value " << cells[i] << endl;
	}
}

/*
Вставляет недостающие цифры в массив, предполагается использование 
на массивах с одной недостающей цифрой
*/
bool insertLastDigit(vector<int> &cells) {
	for (int i = 1; i <= 9; i++)
	{
		vector<int>::iterator check = find(cells.begin(), cells.end(), i);
		if (check != cells.end()) {
			cout << i << " was found" << endl;
		}
		else {
			vector<int>::iterator zero = find(cells.begin(), cells.end(), 0);
			cells[distance(cells.begin(), zero)] = i;
			cout << i << " was not found" << endl;
		}
	}
	return true;
}


bool oneEmptySpace(vector<int> cells) {
	int empty{ 0 };
	for (int i = 0; i < cells.size(); i++)
	{
		if (cells[i] == 0) {
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

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
