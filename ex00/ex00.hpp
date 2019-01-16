/*
** EPITECH PROJECT, 2019
** Picture.hpp
** File description:
** ex02
*/

#ifndef _EX01_HPP
#define _EX01_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &a, T &b)
{
        T tmp;
        tmp = a;
        a = b;
        b = tmp;
}

template<typename T>
T min(T a, T b)
{
        if (a < b)
                return a;
        if (a > b) 
                return b;
        else
                return b;
}

template<typename T>
T max(T a, T b)
{
        if (a > b)
                return (a);
        if (a < b)
                return (b);
        else
                return b;
}

template<typename T>
T add(T a, T b)
{
        T result;
        result = a + b;
        return result;
	}

#endif
