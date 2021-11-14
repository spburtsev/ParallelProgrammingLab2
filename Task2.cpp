#include <chrono>
#include "Task2.h"
#include "Program.h"


typedef std::chrono::high_resolution_clock::time_point timePoint;


void task2()
{
	constexpr int ARR_SIZE = 10000;

	std::array<int, ARR_SIZE> arr {};
	for (auto& el : arr)
		el = rand();

	std::array<int, ARR_SIZE> arr1 {};
	for (size_t i = 0; i < arr.size(); ++i)
		arr1[i] = arr[i];

	timePoint begin;
	timePoint end;

	std::cout << "\tTask2" << std::endl;

	begin = std::chrono::high_resolution_clock::now();
	sort(arr);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "\t"
		<< std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()
		<< std::endl;

	begin = std::chrono::high_resolution_clock::now();
	optSort(arr1);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "\t"
		<< std::chrono::duration_cast<std::chrono::milliseconds>(end - begin).count()
		<< std::endl;

	printDelimeter();
}