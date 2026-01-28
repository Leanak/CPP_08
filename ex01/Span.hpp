/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 19:29:08 by leanakache        #+#    #+#             */
/*   Updated: 2026/01/28 10:52:41 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <iostream>

class Span
{
    private:
        std::vector<int> _var;
        const unsigned int    _N;
    public:
        Span(void);
        Span(unsigned int N);
        ~Span(void);
        Span(const Span & other);
        Span &operator=(const Span & other);
};