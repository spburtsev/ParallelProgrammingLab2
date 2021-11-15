#include "Task3.h"
#include "Polynomial.h"

void task3()
{
	std::array<int, 3> arr1 { rand() % 100, rand() % 100, rand() % 100 };
	std::array<int, 4> arr2 { -1, 0, 1, 1 };

	auto product = multiply(arr1, arr2);

	std::cout << "\tTask3"
		<< std::endl
		<< "Polynomial #1:"
		<< std::endl;
	printPolynomial(arr1, 'x', true);

	std::cout << "Polynomial #2:"
		<< std::endl;
	printPolynomial(arr2, 'x', true);

	std::cout << "Result polynomial:"
		<< std::endl;
	printPolynomial(product, 'x', true);
	printDelimeter();
}