#pragma once
#include "Program.h"

template <class T, size_t S1, size_t S2>
std::array<T, S1 + S2 - 1> multiply(const std::array<T, S1>& a1, const std::array<T, S2>& a2)
{
	std::array<T, S1 + S2 - 1> product{};
	for (size_t i = 0; i < S1; ++i)
		for (size_t j = 0; j < S2; ++j)
			product[i + j] += a1[i] * a2[i];
	return product;
}