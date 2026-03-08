/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:01:40 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/08 16:24:19 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span test(10);
	std::vector<int> modelFail(20);
	std::vector<int> modelOk(8);
	std::list<int> modelList(8);
	std::list<int>::iterator it;

	// remplissage du modele
	for (size_t i = 0; i < modelFail.size(); i++)
	{
		modelFail[i] = i + 2;
	}
	// remplissage du modele
	for (size_t i = 0; i < modelOk.size(); i++)
	{
		int res = 1;
		for (size_t j = 0; j < i; j++)
			res = res * 2;
		modelOk[i] = res;
	}

	int res = 1;
	for (it = modelList.begin(); it != modelList.end(); it++)
	{
		*it = res;
		res *= 2;
	}
	std::cout << BOLD MAGENTA << "Affichage de la taille N de mon Span: " << END << std::endl;
	std::cout << test.getSize() << std::endl;

	std::cout << BOLD MAGENTA << "addNumber : ajout d'un seule nombre" << END << std::endl;
	test.addNumber(0);
	for (size_t i = 0; i < test.getVar().size(); i++)
		std::cout << test.getVar()[i] << std::endl;

	std::cout << BOLD MAGENTA << "addMore: ajout de + de _N nombre (donc fail)" << END << std::endl;
	try
	{
		test.addMore(modelFail.begin(), modelFail.end());
		for (size_t i = 0; i < test.getVar().size(); i++)
			std::cout << test.getVar()[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BOLD MAGENTA << "addMore: ajout de - de _N nombre" << END << std::endl;
	try
	{
		test.addMore(modelOk.begin(), modelOk.end());
		for (size_t i = 0; i < test.getVar().size(); i++)
			std::cout << test.getVar()[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BOLD MAGENTA << "addNumber: ajout de deux nombres en plus donc fail" << END << std::endl;
	try
	{
		test.addNumber(28);
		test.addNumber(12);
		for (size_t i = 0; i < test.getVar().size(); i++)
			std::cout << test.getVar()[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BOLD MAGENTA << "Calcul du shortest Span" << END << std::endl;
	try
	{
		std::cout << test.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BOLD MAGENTA << "Calcul du longest Span" << END << std::endl;
	try
	{
		std::cout << test.longestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << BOLD MAGENTA << "Test avec une liste" << END << std::endl;
	try
	{
		test.addMore(modelList.begin(), modelList.end());
		for (size_t i = 0; i < test.getVar().size(); i++)
			std::cout << test.getVar()[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}