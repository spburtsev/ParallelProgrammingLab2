#include "Program.h"
#include "Task1.h"

void task1()
{
	std::cout << "\tTask1" << std::endl;
	std::array<int, 10> arr { 1, 2, 3, 4, 0, -2, -5, -6, 9, 10 };
	std::cout << countPositive0(arr) << std::endl;
	std::cout << countPositive1(arr) << std::endl;

	printDelimeter();
}
