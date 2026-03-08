/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:25:42 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/08 16:36:50 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>


#define RED     "\033[0;91m"
#define GREEN   "\033[0;92m"
#define MAGENTA "\033[0;95m"

#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"

#define END "\033[0m"

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(void);
		~MutantStack(void);
		MutantStack& operator=(const MutantStack & other);
		MutantStack(const MutantStack & other);
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		
		iterator begin();
		iterator end();

		const_iterator begin() const;
		const_iterator end() const;
};

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack & other)
{
	std::stack<T>::operator=(other);
	return (*this);
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & other) : std::stack<T>(other)
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
  return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
  return (this->c.end());
}
