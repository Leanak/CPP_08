/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 16:25:27 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/08 16:39:51 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Size: " << mstack.size() << std::endl;

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.top() << std::endl;

    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    //++it;
    //--it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}