#include "Program.h"
#include "Task1.h"

typedef std::chrono::high_resolution_clock::time_point timePoint;

void task1()
{
	std::array<int, 1000> arr {};
	for (auto& el : arr)
		el = rand() - 2 * rand();


	int counter = 0;
	timePoint begin;
	timePoint end;

	std::cout << "\tTask1" << std::endl;

	begin = std::chrono::high_resolution_clock::now();
	counter = countPositive(arr);
	end = std::chrono::high_resolution_clock::now();
	std::cout << counter 
		<< "\t"
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< " ns"
		<< std::endl;

	begin = std::chrono::high_resolution_clock::now();
	counter = countPositiveOpt1(arr);
	end = std::chrono::high_resolution_clock::now();
	std::cout << counter
		<< "\t"
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< " ns"
		<< std::endl;

	printDelimeter();
}
