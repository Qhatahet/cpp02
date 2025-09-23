/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:20:52 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/23 13:22:35 by qais             ###   ########.fr       */
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
	this->fpn = num << fractional_bit;
}

Fixed::Fixed(const float fpn_val)
{
	this->fpn = roundf(fpn_val * (1 << fractional_bit));
}

Fixed::Fixed(const Fixed &other)
{
	// this->fpn=other.fpn;
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

void	Fixed::setRawBits(int const raw)
{
	fpn = raw;
}

int	Fixed::getRawBits(void) const
{
	return (fpn);
}

int	Fixed::toInt(void) const
{
	return (fpn >> fractional_bit);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(fpn) / (1 << fractional_bit));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
