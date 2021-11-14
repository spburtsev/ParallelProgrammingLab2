#include "Program.h"
#include "Task4.h"
#include <chrono>
using std::chrono::high_resolution_clock;
using std::chrono::nanoseconds;
using std::chrono::duration_cast;

typedef std::chrono::high_resolution_clock::time_point timePoint;

void task4()
{
    std::array<int, 100> arr {};
	for (auto& el : arr)
		el = rand();

	std::array<int, 100> arr1{};
	for (size_t i = 0; i < arr.size(); ++i)
		arr1[i] = arr[i];

	timePoint begin;
	timePoint end;

	std::cout << "\tTask4" << std::endl;

	begin = high_resolution_clock::now();
	round(arr);
	end = high_resolution_clock::now();
	std::cout << "round:"
		<< "\t"
		<< duration_cast<nanoseconds>(end - begin).count()
		<< " ns"
		<< std::endl;

	begin = high_resolution_clock::now();
	optRound(arr1);
	end = high_resolution_clock::now();
	std::cout << "opt:"
		<< "\t"
		<< duration_cast<nanoseconds>(end - begin).count()
		<< " ns"
		<< std::endl;

	printDelimeter();
}