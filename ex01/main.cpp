/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:01:36 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/03 22:41:22 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	// Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(-11);
	// sp.addNumber(100);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	std::list<int> lst;
	for (int i = 0; i < 10000; ++i)
		lst.push_back(i);
	Span sp = Span(10000);
	sp.addRangeNumber(lst.begin(), lst.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span sp2 = Span(10);
	sp2.addRangeNumber(lst.begin(), lst.end());
	return (0);
}
