/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 06:22:37 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/04 06:26:26 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde horde(10);
	horde.announce();
    return 0;
}