/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 10:50:08 by leanakache        #+#    #+#             */
/*   Updated: 2026/01/28 10:56:16 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//Assignement operator
Span &Span::operator=(const Span & other)
{
    if (this != &other)
    {
    }
    std::cout << "Assignment operator called" << std::endl;
    return (*this);
}

//Constructeur copie
Span::Span(const Span & other)
{
    *this = other;
    std::cout << "Copy constructor called" << std::endl;
}


//Constructeur avec param
Span::Span(unsigned int N): _N(N)
{
    std::cout << "Constructor with param called" << std::endl;
}

//Constructeur par défaut avec N à 0
Span::Span(void) : _N(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//Destructeur
Span::~Span(void)
{
    //Pas besoin de delete un std::vector ??
    std::cout << "Destructor called" << std::endl;
}