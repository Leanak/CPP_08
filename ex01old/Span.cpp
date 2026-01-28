/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:44:58 by leanakache        #+#    #+#             */
/*   Updated: 2026/01/26 18:29:22 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span &Span::operator=(const Span & other)
{
    if (this == &other)
        return (*this);
    else
    {
        delete [] this->_var;
        
        this->_N = other._N;
        this->_var = new int[this->_N];
        for (unsigned int i = 0; i < this->_N; i++)
            this->_var[i] = other._var[i];
        return (*this);
    }
}

Span::Span(const Span & other) : _N(other->_N), _var(new int[other._N])
{
    for (unsigned int i = 0; i < this->_N; i++)
        this->_var[i] = other._var[i];
    std::cout << " Copy constructor called" << std::endl;
}

Span::Span(unsigned int N) : _N(N), _var(new int[N])
{
    std::cout << "Constructor param called" << std::endl;
}

Span::Span(void): _var(NULL), _N(0)
{
    std::cout << "Default constructor" << std::endl;
}

Span::~Span(void)
{
    delete [] _var;
    std::cout << " Destructor called" << std::endl;
}