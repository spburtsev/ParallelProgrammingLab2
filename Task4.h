#pragma once
#include "Program.h"
#include <cmath>

void task4();

template <class T, size_t S>
void round(std::array<T, S> arr)
{
    for (size_t i = 0; i < arr.size(); ++i)
    {
        arr[i] = roundf(arr[i]);
    }
}

template <class T, size_t S>
void optRound(std::array<T, S> arr)
{
    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (arr[i] > 0)
        {
            arr[i] = static_cast<T>(arr[i] + 0.5);
        }
        else
        {
            arr[i] = static_cast<T>(arr[i] - 0.5);
        }
    }
}