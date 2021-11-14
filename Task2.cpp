#include <chrono>
#include <functional>
#include "Task2.h"
#include "Program.h"
using std::chrono::milliseconds;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::cout;
using std::endl;

constexpr int LARGE_ARR_SIZE = 10'000;
typedef high_resolution_clock::time_point timePoint;
typedef std::array<int, LARGE_ARR_SIZE> largeArray;
typedef std::unique_ptr<std::array<int, LARGE_ARR_SIZE>> largeArrayPointer;

void task2()
{
	largeArrayPointer arr { new largeArray()};
	for (auto& el : *arr)
		el = rand();

	largeArrayPointer arr1 { new largeArray() };
	for (size_t i = 0; i < arr->size(); ++i)
		arr1->at(i) =  arr->at(i);

	timePoint begin;
	timePoint end;

	cout << "\tTask2" << endl;

	begin = high_resolution_clock::now();
	sort(*arr);
	end = high_resolution_clock::now();
	cout << "sort:" 
		<< "\t"
		<< duration_cast<milliseconds>(end - begin).count()
		<< " ms"
		<< endl;

	begin = high_resolution_clock::now();
	optSort(*arr1);
	end = high_resolution_clock::now();
	cout << "opSrt:" 
		<< "\t"
		<< duration_cast<milliseconds>(end - begin).count()
		<< " ms"
		<< endl;

	printDelimeter();
}
