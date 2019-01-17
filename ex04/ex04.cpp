/*
** EPITECH PROJECT, 2019
** ex03.hpp
** File description:
** ex03
*/

#include "ex04.hpp"
#include <iostream>


template<>
bool Tester<std::string>::equal(const std::string &a, const std::string &b)
{
	if (a == b)
		return (true);
	return (false);
}

template<>
bool Tester<double>::equal(const double &a, const double &b)
{
	if (a == b)
		return (true);
	return (false);
}

template<>
bool Tester<float>::equal(const float &a, const float &b)
{
	if (a == b)
		return (true);
	return (false);
}

template<>
bool Tester<int>::equal(const int &a, const int &b)
{
	if (a == b)
		return (true);
	return (false);
}

