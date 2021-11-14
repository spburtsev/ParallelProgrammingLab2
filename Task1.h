#pragma once
#include <algorithm>
#include <chrono>

void task1();

template <class T, size_t S>
inline size_t countPositive0(std::array<T, S> arr)
{
	return std::count_if(arr.begin(), arr.end(), [](T el) { return el > 0; });
}

template <class T, size_t S>
size_t countPositive1(std::array<T, S> arr)
{
	size_t counter = 0;
	for (auto& el : arr)
	{
		if (el > 0)
			++counter;
	}
	return counter;
}

template <class T, size_t S>
size_t countPositive2(std::array<T, S> arr)
{
	size_t counter = 0;
	for (size_t i = 0; i < arr.size(); ++i)
	{
		if (arr[i] > 0)
			++counter;
	}
	return counter;
}
