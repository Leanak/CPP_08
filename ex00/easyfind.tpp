/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:52:50 by leanakache        #+#    #+#             */
/*   Updated: 2026/02/26 18:49:14 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::const_iterator easyfind(const T& first, int second)
{
    typename T::const_iterator it = std::find(first.begin(), first.end(), second);
    //typename T::const_iterator ite = first.end();
    

    if (it == first.end())
        throw std::runtime_error("value not found");
    return it ; 
    /* for (it = first.begin(); it != ite; it++)
    {
        if (*it == second)
            return (it);
    } */
    //throw std::runtime_error("not found");
}
