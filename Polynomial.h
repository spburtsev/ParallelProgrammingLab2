#pragma once
#include "Program.h"
#include <string>

template <class T, size_t S1, size_t S2>
std::array<T, S1 + S2 - 1> multiply(const std::array<T, S1>& a1, const std::array<T, S2>& a2)
{
	std::array<T, S1 + S2 - 1> product{};
	for (size_t i = 0; i < S1; ++i)
		for (size_t j = 0; j < S2; ++j)
			product[i + j] += a1[i] * a2[j];
	return product;
}

template <class T>
inline std::wstring getPoweredVarStr(T coefficient, char varName, int power)
{
	std::wstring result{};
	auto absCoeff = abs(coefficient);
	bool isCoeffPositive = coefficient > 0;

	if (coefficient == 0)
		return result;

	if (power == 0)
	{
		if (!isCoeffPositive)
		{
			result = L"(";
			result.append(std::to_wstring(coefficient));
			result.push_back(L')');
			return result;
		}
		result.append(std::to_wstring(coefficient));
		return result;
	}
		
	if (absCoeff != 1)
	{
		if (!isCoeffPositive)
		{
			result = L"(";
			result.append(std::to_wstring(coefficient));
			result.push_back(L')');
		}
		else
		{
			result.append(std::to_wstring(coefficient));
		}
		result.push_back(static_cast<wchar_t>(varName));
		if (power != 1)
		{
			result.push_back(L'^');
			result.append(std::to_wstring(power));
		}
		return result;
	}

	if (!isCoeffPositive)
	{
		result = L"(-";
		result.push_back(static_cast<wchar_t>(varName));
		if (power != 1)
		{
			result.push_back(L'^');
			result.append(std::to_wstring(power));
		}
		result.push_back(L')');
		return result;
	}

	result.push_back(static_cast<wchar_t>(varName));
	if (power != 1)
	{
		result.push_back(L'^');
		result.append(std::to_wstring(power));
	}	
	return result;
}

template <class T, size_t S>
void printPolynomial(const std::array<T, S>& polynomial, char varName, bool printEndl = false)
{
	std::wstring polynomialString{};
	std::wstring memberString{};
	size_t polynomialSize = polynomial.size();
	size_t inspectedMembers = 1;

	memberString = getPoweredVarStr(polynomial[0], varName, polynomialSize - 1);
	if (!memberString.empty())
		polynomialString.append(memberString);
	while (inspectedMembers != polynomialSize)
	{
		memberString = getPoweredVarStr(polynomial[inspectedMembers], varName, polynomialSize - inspectedMembers - 1);
		if (!memberString.empty())
			polynomialString.append(L" + ").append(memberString);
		++inspectedMembers;
	}

	std::wcout << polynomialString;
	if (printEndl)
	{
		std::wcout << std::endl;
	} 
}