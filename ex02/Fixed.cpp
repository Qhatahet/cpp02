/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:59:30 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/25 13:47:18 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractional_bit = 8;

Fixed::Fixed()
{
	fpn = 0;
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
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	if(this != &other)
	{
		this->fpn = other.fpn;
	}
	return (*this);
}

Fixed::~Fixed()
{}

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

Fixed	&Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	else 
		return (num2);
}

const Fixed	&Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	else 
		return (num2);
}

Fixed	&Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	else 
		return (num2);
}

const Fixed	&Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	else 
		return (num2);
}

bool	Fixed::operator!=(const Fixed &obj) const
{
	if (fpn != obj.fpn)
		return(true);
	return (false);
}

bool	Fixed::operator==(const Fixed &obj) const
{
	if (fpn == obj.fpn)
		return(true);
	return (false);
}

bool	Fixed::operator>(const Fixed &obj) const
{
	if (fpn > obj.fpn)
		return(true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &obj) const
{
	if (fpn >= obj.fpn)
		return(true);
	return (false);
}

bool	Fixed::operator<(const Fixed &obj) const
{
	if (this->fpn < obj.fpn)
		return(true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &obj) const
{
	if (fpn <= obj.fpn)
		return(true);
	return (false);
}

Fixed	Fixed::operator/(const Fixed &num) const
{
	return Fixed(this->toFloat() / num.toFloat());	
}

Fixed	Fixed::operator-(const Fixed &num) const
{
	return Fixed(this->toFloat() - num.toFloat());
}

Fixed	Fixed::operator+(const Fixed &num) const
{
	return Fixed(this->toFloat() + num.toFloat());
}

Fixed	Fixed::operator*(const Fixed &num) const
{
	return Fixed(this->toFloat() * num.toFloat());
}

Fixed	&Fixed::operator--()
{
	--fpn;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--fpn;
	return (temp);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++fpn;
	return (temp);
}

Fixed	&Fixed::operator++()
{
	++fpn;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
    out << fixed.toFloat();
    return out;
}
