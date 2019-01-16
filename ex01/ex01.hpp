/*
** EPITECH PROJECT, 2019
** ex01.hpp
** File description:
** ex01
*/

#ifndef _EX01_HPP_
#define _EX01_HPP_

#include <iostream>
#include <string> 

template <typename T>
int compare(const T &a, const T &b)
{
        if (a = b)
                return (0);
        if (a < b)
                return (-1);
        if (a > b)
                return (1);
}

template<>
int compare(const char * const &a, const char * const &b)
{
        if (std::strcmp(a, b) = 0)
                return (0)
        else if (std::strcmp(a, b) < 0)
                return (-1);
        else 
                return (1);
}


#endif