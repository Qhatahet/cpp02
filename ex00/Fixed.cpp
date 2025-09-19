/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 14:38:47 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/19 16:06:43 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bit = 8;

Fixed::Fixed()
{
	fpn = 0;
	std::cout << "Default constructor called" << std::endl;
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

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fpn);
}

void	Fixed::setRawBits(int const raw)
{
	fpn = raw;
}
