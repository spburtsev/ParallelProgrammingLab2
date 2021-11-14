#include "Program.h"
#include "Task4.h"
#include <chrono>

typedef std::chrono::high_resolution_clock::time_point timePoint;

void task4()
{
    std::array<int, 100> arr {};
	for (auto& el : arr)
		el = rand();

	timePoint begin;
	timePoint end;

	std::cout << "\tTask4" << std::endl;

	begin = std::chrono::high_resolution_clock::now();
	round(arr);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "\t"
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< std::endl;

	begin = std::chrono::high_resolution_clock::now();
	optRound(arr);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "\t"
		<< std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin).count()
		<< std::endl;

	printDelimeter();
}