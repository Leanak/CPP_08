/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:50:08 by leanakache        #+#    #+#             */
/*   Updated: 2026/01/29 21:50:31 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const std::vector<int> &Span::getVar(void) const
{
    return (_var);
}

//Méthodes
unsigned int Span::shortestSpan(void) const
{
    int span = INT_MAX;
	int spanew = 0;
    
    if (this->_var.empty() || _var.size() == 1)
        throw std::length_error ("Exception: Empty or size 1 vector");
    else
    {
        for (size_t i = 0; i < _var.size(); i++)
        {
            for (size_t j = 0; j < _var.size(); j++)
            {
				if (i == j)
					continue ;
                spanew = abs(_var[j] - _var[i]);
                if (spanew < span)
					span = spanew;
            }
        }
    }
    return (span);
}

unsigned int Span::longestSpan(void) const
{
    int span = 0;
	int spanew = 0;
    
    if (this->_var.empty() || _var.size() == 1)
        throw std::length_error ("Exception: Empty or size 1 vector");
    else
    {
        for (size_t i = 0; i < _var.size(); i++)
        {
            for (size_t j = 0; j < _var.size(); j++)
            {
				if (i == j)
					continue ;
                spanew = abs(_var[j] - _var[i]);
                if (spanew > span)
					span = spanew;
            }
        }
    }
    return (span);
}


void Span::addMore(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	if (_var.size() + std::distance(begin, end) > _N)
		throw std::out_of_range("Exception: Impossible to add this many numbers");
	_var.insert(_var.end(), begin, end);
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

//Assignement operator
Span &Span::operator=(const Span & other)
{
    if (this != &other)
       _var = other._var;
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

//Constructeur copie
Span::Span(const Span & other): _var(other._var), _N(other._N)
{
    std::cout << "Copy constructor called" << std::endl;
}

//Constructeur avec param
Span::Span(unsigned int N): _var(),  _N(N) 
{
    std::cout << "Constructor with param called" << std::endl;
}

//Constructeur par défaut avec N à 0
Span::Span(void) : _var(), _N(0) 
{
    std::cout << "Default constructor called" << std::endl;
}

//Destructeur
Span::~Span(void)
{
    std::cout << "Destructor called" << std::endl;
}