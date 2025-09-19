/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:20:52 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/19 16:28:10 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bit = 8;

Fixed::Fixed()
{
	fpn = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	this->fpn = num;
}

Fixed::Fixed(const float fpn)
{
	this->fpn = static_cast<int>(fpn);
}

Fixed::Fixed(const Fixed &other)
{
	//this->fpn=other.fpn;
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if(this != &other)
	{
		this->fpn = other.fpn;
	}
	std::cout << "Copy assignment oprator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destuctor called" << std::endl;
}

int	Fixed::toInt(void) const
{
	
}

float	Fixed::toFloat(void) const
{
	
}
