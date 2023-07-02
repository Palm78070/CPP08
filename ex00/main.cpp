/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 20:11:42 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/02 22:45:39 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> v;
	std::deque<int> d;
	std::list<int> l;

	for (int i = 0; i < 10; ++i)
	{
		v.push_back(i);
		d.push_back(i);
		l.push_back(i);
	}
	print_position(v, 2);
	print_position(d, 11);
	print_position(l, 4);
	return (0);
}
