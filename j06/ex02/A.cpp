/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfulop <rfulop@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/22 16:42:09 by rfulop            #+#    #+#             */
/*   Updated: 2018/01/10 12:31:10 by rfulop           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
}

A::~A(void)
{
}

A::A(A const & src)
{
	*this = src;
}

A & A::operator=(A const & rhs)
{
	(void)rhs;
	return (*this);
}