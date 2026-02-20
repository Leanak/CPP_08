/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:28:44 by leanakache        #+#    #+#             */
/*   Updated: 2026/01/30 13:42:24 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
/* 
int main(void)
{
    std::vector<int> model(10000);

    for (size_t i = 0; i < model.size(); i++)
        model[i] = i + 1;
    try 
    {
        Span Test1(10000);
        Test1.addMore(model.begin(), model.end());    
        const std::vector<int> &v = Test1.getVar();
    
        for (std::vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
            std::cout << *it << std::endl;        
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}*/

int main (void)
{
    Span sp = Span(5);
    
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    return 0;
}