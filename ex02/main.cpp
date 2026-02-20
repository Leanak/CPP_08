/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:52:43 by leanakache        #+#    #+#             */
/*   Updated: 2026/02/07 23:54:54 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/* int main(void)
{
    std::cout << BOLD MAGENTA << "Test with stack" << END << std::endl;
    MutantStack<int> Hey;
    MutantStack<char> Bye;
    MutantStack<std::string> Okay;
    
    Hey.push(1);
    Hey.push(2);
    Hey.push(3);

    Bye.push('a');
    Bye.push('b');
    Bye.push('c');
    
    Okay.push("first");
    Okay.push("second");
    Okay.push("third");

    std::stack<int>::container_type::iterator start;
    std::stack<char>::container_type::const_iterator c_start;
    std::stack<std::string>::container_type::iterator b_start;

    for (start = Hey.begin(); start != Hey.end(); start++)
        std::cout << *start << std::endl;

    for (c_start = Bye.begin(); c_start != Bye.end(); c_start++)
        std::cout << *c_start << std::endl;
    
    for (b_start = Okay.begin(); b_start != Okay.end(); b_start++)
        std::cout << *b_start << std::endl;
    
    std::cout << BOLD MAGENTA << "Test with list" << END << std::endl;
    std::list<int> list_int;
    list_int.push_back(1);
    list_int.push_back(2);
    list_int.push_back(3);
    
    for (std::list<int>::iterator list_it = list_int.begin(); list_it != list_int.end(); list_it++)
        std::cout << *list_it << std::endl;
    
   std::list<char> list_char;
    list_char.push_back('a');
    list_char.push_back('b');
    list_char.push_back('c');
    
    for(std::list<char>::iterator list_it = list_char.begin(); list_it != list_char.end(); list_it++)
        std::cout << *list_it << std::endl;
    
    std::list<std::string> list_string;
    list_string.push_back("first");
    list_string.push_back("second");
    list_string.push_back("third");

    for(std::list<std::string>::iterator list_it = list_string.begin(); list_it != list_string.end(); list_it++)
        std::cout << *list_it << std::endl;
    
    return (0);
} */

int main(void)
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "Size: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    return 0;
}