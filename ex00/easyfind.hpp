/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:11:57 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/03 20:00:16 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>

class NotFound : public std::exception
{
public:
	virtual const char *what() const throw() { return "Cannot find value in container to match"; };
};

template <typename T>
typename T::iterator easyfind(T &container, int n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFound();
	return (it);
}

template <typename T>
void print_position(T &container, int n)
{
	try
	{
		int pos_v = std::distance(container.begin(), easyfind(container, n));
		std::cout << "Find value match at position " << pos_v << std::endl;
	}
	catch (NotFound &e)
	{
		std::cout << e.what() << std::endl;
	}
};
#endif
