/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:01:55 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/08 16:42:21 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <list>

//Couleurs
#define RED     "\033[0;91m"
#define GREEN   "\033[0;92m"
#define MAGENTA "\033[0;95m"

#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"

#define END "\033[0m"

//Class
class Span
{
	private:
		unsigned int _N;
		std::vector<int> _var;
	public:
		Span(void);
		Span(unsigned int var);
		~Span(void);
		Span(const Span & other);
		Span &operator=(const Span & other);

		template<typename Iterator>
		void addMore(Iterator first, Iterator second);
		
		void addNumber(int toAdd);
		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;

		std::vector<int> getVar(void) const;
		unsigned int getSize(void) const;
};

template<typename Iterator>
void Span::addMore(Iterator begin, Iterator end)
{
	if (_var.size() + std::distance(begin, end) > _N)
		throw std::out_of_range("Exception: Impossible to add this many number");	

	_var.insert(_var.end(), begin, end);
}

//#include "Span.tpp"
