#pragma once
#include <algorithm>

void task1();

template <class T, size_t S>
inline size_t countPositive0(std::array<T, S> arr)
{
	return std::count_if(arr.begin(), arr.end(), [](T el) { return el > 0; });
}

template <class T, size_t S>
inline size_t countPositive1(std::array<T, S> arr)
{
	size_t counter = 0;
	for (auto& el : arr)
	{
		if (el > 0)
			++counter;
	}
	return counter;
}