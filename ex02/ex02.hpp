/*
** EPITECH PROJECT, 2019
** ex02.hpp
** File description:
** ex02
*/

#ifndef _EX02_HPP_
#define _EX02_HPP_

#include <iostream>
#include <string>

template <typename T>
T const &min(T const &a, T const &b)
{
    std::cout << "template min" << std::endl;
    if (a <= b)
	return a;
    return b;
}

int min(int a, int b)
{
    std::cout << "non-template min" << std::endl;
    if (a <= b)
	return a;
    return b;
}

template<typename T>
const T templateMin(T const *tab, int const size)
{
    int i = 1;
    T vmin;
    vmin = tab[0];
    for (; i < size; i++) {
	if (tab[i] < vmin)
	    vmin = min<T>(tab[i], vmin);
    }
    return vmin;
}

int nonTemplateMin(int *tab, int size)
{
    int i = 1;
    int vmin;
    vmin = tab[0];
    for (; i < size; i++) {
	if (tab[i] < vmin)
	    vmin = min(tab[i], vmin);
    }
    return vmin;
}

#endif
