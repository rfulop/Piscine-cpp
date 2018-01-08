/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:13 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/08 13:01:15 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
    // Character* zaz = new Character(``zaz'');
    //
    // std::cout << *zaz;
    //
    // Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();

    // zaz->equip(pr);
    // std::cout << *zaz;
    // zaz->equip(pf);
    //
    // zaz->attack(b);
    // std::cout << *zaz;
    // zaz->equip(pr);
    // std::cout << *zaz;
    // zaz->attack(b);
    // std::cout << *zaz;
    // zaz->attack(b);
    // std::cout << *zaz;

    return 0;
}
