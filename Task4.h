#pragma once
#include "Program.h"
#include <cmath>

void task4();

template <class T, size_t S>
inline void round(std::array<T, S> arr)
{
    for (auto& el : arr)
        el = roundf(el);
}

template <class T, size_t S>
void optRound(std::array<T, S> arr)
{
    for (auto& el : arr)
    {
        if (el > 0)
            el = static_cast<T>(el + 0.5);
        else
            el = static_cast<T>(el - 0.5);
    }
}