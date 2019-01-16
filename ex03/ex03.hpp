/*
** EPITECH PROJECT, 2019
** ex03.hpp
** File description:
** ex03
*/

#ifndef _EX03_HPP_
#define _EX03_HPP_

#include <iostream>

	template<typename T>
	void foreach(const T* tab, void (func)(const T&), int size)
	{
		int i = 0;
		while(i < size) {
			func(tab[i]);
			i++;
		}
}

	template<typename T>
	void print(const T& prt)
	{
		std::cout << prt << std::endl;
	}

#endif