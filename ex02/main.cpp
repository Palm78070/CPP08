/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthammat <rthammat@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 23:22:22 by rthammat          #+#    #+#             */
/*   Updated: 2023/07/04 18:10:06 by rthammat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << "Pop mstack" << std::endl;
	mstack.pop();
	std::cout << "size of mstack is ";
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Iterate mstack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "Test deep copy" << std::endl;
	MutantStack<int> mstack2(mstack);
	std::cout << "Pop mstack" << std::endl;
	mstack.pop();
	it = mstack.begin();
	ite = mstack.end();
	std::cout << "Iterate mstack:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	it = mstack2.begin();
	ite = mstack2.end();
	std::cout << "Iterate mstack2:" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	std::cout << "Test rbegin and rend" << std::endl;
	std::cout << "mstack.rbegin() is " << *rit << std::endl;
	std::cout << "--rite" << std::endl;
	--rite;
	std::cout << "first element of mstack is " << *rite << std::endl;
	return (0);
}
