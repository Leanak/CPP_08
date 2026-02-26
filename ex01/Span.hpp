/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:29:08 by leanakache        #+#    #+#             */
/*   Updated: 2026/02/26 19:39:56 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
#include <exception>
#include <iostream>
#include <climits>
#include <numeric>
#include <vector>
#include <algorithm>

class Span
{
  private:
	std::vector<int> _var;
	const unsigned int _N;

  public:
	unsigned int shortestSpan(void) const;
	unsigned int longestSpan(void) const;
	const std::vector<int> &getVar(void) const;
	void addNumber(int toAdd);
	void addMore(std::vector<int>::const_iterator begin,
		std::vector<int>::const_iterator end);
	Span(void);
	Span(unsigned int N);
	~Span(void);
	Span(const Span &other);
	Span &operator=(const Span &other);
};