/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:16:30 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/23 21:04:51 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    number = 0;
};

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

Fixed &Fixed::operator=(const Fixed &assign)
{
    std::cout << "Copy assignment operator called" << std::endl;
    number = assign.getRawBits();
    return (*this);
};

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (number);
};

void Fixed::setRawBits( int const s_raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    number = s_raw;
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};
