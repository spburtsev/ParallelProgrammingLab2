#include <chrono>
#include "Task2.h"
#include "Program.h"


typedef std::chrono::high_resolution_clock::time_point timePoint;


void task2()
{
	std::array<int, 1000> arr {};
	for (auto& el : arr)
		el = rand();

	timePoint begin;
	timePoint end;

	std::cout << "\tTask2" << std::endl;

	begin = std::chrono::high_resolution_clock::now();
	sort(arr);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "\t"
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< std::endl;

	begin = std::chrono::high_resolution_clock::now();
	optSort(arr);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "\t"
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< std::endl;

	printDelimeter();
}