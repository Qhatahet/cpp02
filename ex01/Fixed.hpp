/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 16:11:45 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/19 16:21:15 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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
		int	toInt(void) const;
		float	toFloat(void) const;
};

#endif