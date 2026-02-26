/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:52:38 by leanakache        #+#    #+#             */
/*   Updated: 2026/02/26 18:50:49 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
   std::list<int> lst;
   int res;
   std::list<int>::const_iterator result;

   lst.push_back(3);
   lst.push_back(7);
   lst.push_back(12);

   try
   {
    res = *easyfind(lst, 7);
    result = easyfind(lst, 12);
    std::cout << res << std::endl;
    std::cout << *result << std::endl;
    }
   catch (std::exception &e)
   {
    std::cout << e.what() << std::endl;
   }
   return 0;
}