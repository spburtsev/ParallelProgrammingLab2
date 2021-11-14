#pragma once
#include "Program.h"
#include <vector>

struct Polynomial
{
	int _degree = 0;
	std::vector<double> _coefficients{};
	
	Polynomial() = default;

	Polynomial(int degree, std::initializer_list<double> init)
		: _degree(degree)
		, _coefficients(init) {}

	Polynomial(const Polynomial& another)
		: _degree(another._degree)
		, _coefficients(another._coefficients) {}

	Polynomial(const Polynomial&& another)
		: _degree(another._degree)
		, _coefficients(another._coefficients) {}

	~Polynomial() = default;

};

Polynomial multiply(const Polynomial& p1, const Polynomial& p2)
{
	size_t p1Size = p1._coefficients.size();
	size_t p2Size = p2._coefficients.size();

	size_t resultSize = p1Size * p2Size - 1;
	Polynomial product{};

	for (size_t i = 0; i < p1Size; ++i)
		for (size_t j = 0; j < p2Size; ++j)
			product._coefficients[i + j] += p1._coefficients[i] * p2._coefficients[j];

	return product;
}