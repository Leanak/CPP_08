/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leanakache <leanakache@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 17:52:50 by leanakache        #+#    #+#             */
/*   Updated: 2026/01/24 23:17:22 by leanakache       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::const_iterator easyfind(T first, int second)
{
    typename T::const_iterator it;
    typename T::const_iterator ite = first.end();
    
    for (it = first.begin(); it != ite; it++)
    {
        if (*it == second)
            return (it);
    }
    throw std::runtime_error("not found");
}
