/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 17:29:03 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/07 18:22:42 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//librairies
#include <iostream>
#include <algorithm>
#include <stdexcept>
#include <list>
#include <vector>
#include <deque>

//Couleurs
#define RED     "\033[0;91m"
#define GREEN   "\033[0;92m"
#define MAGENTA "\033[0;95m"

#define BOLD       "\033[1m"
#define UNDERLINE  "\033[4m"
#define ITALIC     "\033[3m"

#define END "\033[0m"


//Template
template<typename T>
typename T::const_iterator easyfind(const T & first, int second)
{
	typename T::const_iterator it = std::find(first.begin(), first.end(), second);
	
	if (it == first.end())
		throw std::runtime_error("Value not find");
	return it;
}

