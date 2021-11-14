#include "Task3.h"
#include "Polynomial.h"

void task3()
{
	std::array<int, 3> arr1 { rand(), rand(), rand() };
	std::array<int, 3> arr2 { -1, 0, 1 };

	std::cout << "\tTask3" 
		<< std::endl
		<< "Result Polynomial:"
		<< std::endl;

	auto product = multiply(arr1, arr2);
	for (int& el : product)
		std::cout << el << " ";

	std::cout << std::endl;
	printDelimeter();
}