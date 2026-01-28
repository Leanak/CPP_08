/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 00:14:04 by leanakache        #+#    #+#             */
/*   Updated: 2026/01/26 14:50:51 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cstdlib>

class Span
{
    private:
        unsigned int _N;
        int *_var;
        Span(void);
    public:
        Span(unsigned int N);
        ~Span(void);
        Span(const Span &other);
        Span &operator=(const Span &other);
};

