/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:28:45 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/07 18:32:30 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::list<int> lst;
	std::vector<int> vectos;
	std::deque<int> dequos;
	int res;

	lst.push_back(5);
	lst.push_back(9);
	lst.push_back(99);
	lst.push_back(0);

	vectos.push_back(5);
	vectos.push_back(15);
	vectos.push_back(3);
	vectos.push_back(2);
	
	dequos.push_back(18);
	dequos.push_back(11);
	dequos.push_back(12);
	dequos.push_back(8);

	std::cout << "Try with int list" << std::endl;
	try
	{
		std::list<int>::const_iterator result;
		res = *easyfind(lst, 5);
		result = easyfind(lst, 0);
		std::cout << res << std::endl;
		std::cout << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Try with int vector" << std::endl;
	try
	{
		std::vector<int>::const_iterator result;
		res = *easyfind(vectos, 5);
		result = easyfind(vectos, 2);
		std::cout << res << std::endl;
		std::cout << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "Try with int deque" << std::endl;
	try
	{
		std::deque<int>::const_iterator result;
		res = *easyfind(dequos, 8);
		result = easyfind(dequos, 11);
		std::cout << res << std::endl;
		std::cout << *result << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}