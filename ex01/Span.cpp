/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 19:03:45 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/07 22:21:32 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

unsigned int Span::getSize(void) const
{
	return (_N);
}

std::vector<int> Span::getVar(void) const
{
	return (_var);
}

unsigned int Span::shortestSpan(void) const
{
	if (_var.size() <= 1)
		throw std::length_error("Not enough elements");

	std::vector<int> tmp = _var;
	std::sort(tmp.begin(), tmp.end());

	unsigned int minSpan = UINT_MAX;

	for (size_t i = 1; i < tmp.size(); i++)
	{
		unsigned int diff = tmp[i] - tmp[i - 1];
		if (diff < minSpan)
			minSpan = diff;
	}
	return (minSpan);
}

unsigned int Span::longestSpan(void) const
{
	if (_var.size() <= 1)
		throw std::length_error("Not enough elements");
	
	int min = *std::min_element(_var.begin(), _var.end());
	int max = *std::max_element(_var.begin(), _var.end());

	return (static_cast<unsigned int>(max - min));
}

void Span::addNumber(int toAdd)
{
	if (this->_var.size() >= this->_N)
		throw std::out_of_range("Exception: Array index out of bounds");
	else
	{
		_var.push_back(toAdd);
	}
}

Span::Span(const unsigned int var)
{
	this->_N = var;
}

Span::Span(void)
{
	this->_N = 0;
}

Span::~Span(void)
{
}

Span::Span(const Span & other): _N(other._N), _var(other._var)
{
}

Span &Span::operator=(const Span & other)
{
	if (this != &other)
	{
		_var = other._var;
	}
	return (*this);
}