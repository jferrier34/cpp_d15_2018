/*
** EPITECH PROJECT, 2019
** ex01.hpp
** File description:
** ex01
*/

#ifndef _EX01_HPP_
#define _EX01_HPP_

#include <stdlib.h>
#include <iostream>
#include <string> 
#include <cstring>

template <typename T>
int compare(const T &a, const T &b)
{
        if (a == b)
                return (0);
        else if (a < b)
                return (-1);
        else
                return (1);
}

template<>
int compare(const char * const &a, const char * const &b)
{
        if (std::strcmp(a, b) > 0)
	    return (1);
        else if (std::strcmp(a, b) < 0)
                return (-1);
        else 
                return (0);
}


#endif
