#pragma once
#include <algorithm>

void task2();

template <class T, size_t S>
void sort(std::array<T, S>& arr)
{
	for	(size_t i = 0; i < S - 1; i++)
	{
		for (size_t j = 0; j < S - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
}

template <class T, size_t S>
inline void optSort(std::array<T, S>& arr)
{
	size_t i = 0;
	bool t = true;

	while (t)
	{
		t = false;
		for (size_t j = 0; j < S - i - 2; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				std::swap(arr[j], arr[j + 1]);
				t = true;
			}
		}
		++i;
	}
}
