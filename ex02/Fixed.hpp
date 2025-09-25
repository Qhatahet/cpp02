/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 16:59:20 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/24 18:27:13 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fpn;
		static const int	fractional_bit;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float fpn);
		Fixed(const Fixed &other);
		Fixed& operator=(const Fixed &other);
		~Fixed();
		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		int		toInt(void) const;
		float	toFloat(void) const;
		static Fixed&	min(Fixed &num1, Fixed &num2);
		static const Fixed&	min(const Fixed &num1, const Fixed &num2);
		static Fixed&	max(Fixed &num1, Fixed &num2);
		static const Fixed&	max(const Fixed &num1, const Fixed &num2);
		bool	operator<(const Fixed &obj) const;
		bool	operator>(const Fixed &obj) const;
		bool	operator<=(const Fixed &obj) const;
		bool	operator>=(const Fixed &obj) const;
		bool	operator==(const Fixed &obj) const;
		bool	operator!=(const Fixed &obj) const;
		Fixed& operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		Fixed	operator*(const Fixed& num) const;
		Fixed	operator+(const Fixed& num) const;
		Fixed	operator-(const Fixed& num) const;
		Fixed	operator/(const Fixed& num) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif