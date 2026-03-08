/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lenakach <lenakach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 22:11:39 by lenakach          #+#    #+#             */
/*   Updated: 2026/03/08 16:23:53 by lenakach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename Iterator>
void Span::addMore(Iterator begin, Iterator end)
{
	if (_var.size() + std::distance(begin, end) > _N)
		throw std::out_of_range("Exception: Impossible to add this many number");	

	_var.insert(_var.end(), begin, end);
}
