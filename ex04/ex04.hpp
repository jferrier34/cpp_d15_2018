/*
** EPITECH PROJECT, 2019
** ex03.hpp
** File description:
** ex03
*/

#ifndef _EX04_HPP_
#define  _EX04_HPP_
#include <iostream>

template <typename T>
bool equal(T const &a, T const &b)
{
        if (a == b) {
                return (true);
        } else 
        return (false);
}

template <typename T>
class Tester
{
        public:
              bool equal(const T &a, const T &b);
};



#endif