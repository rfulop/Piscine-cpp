/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/06 05:47:17 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/07 03:36:15 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

const int Fixed::_fractionnalBit = 8;

Fixed::Fixed(void) : _fixedPoint(0)
{
    std::cout << "Default constuctor called" << std::endl;
}

Fixed::Fixed(const Fixed & cp)
{
    std::cout << "Copy constuctor called" << std::endl;
    *this = cp;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constuctor called" << std::endl;
    setRawBits(nb << _fractionnalBit);
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constuctor called" << std::endl;
    setRawBits(roundf(nb * (1 << _fractionnalBit)));
}

Fixed::~Fixed(void)
{
    std::cout << "Destructof called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    _fixedPoint = rhs.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member fonction called" << std::endl;
    return _fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
  _fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)_fixedPoint / (1 << _fractionnalBit));
}

int Fixed::toInt(void) const
{
    return (_fixedPoint >> _fractionnalBit);
}

std::ostream &operator<<(std::ostream &o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return o;
}
