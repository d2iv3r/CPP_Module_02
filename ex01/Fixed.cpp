/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:05:08 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/24 10:05:12 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixedNb = 0;
};

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(other.getRawBits());
};

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedNb = num << fracBits;
};

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->fixedNb = roundf(num * (1 << fracBits));
};

Fixed &Fixed::operator=(const Fixed &assign)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedNb = assign.getRawBits();
    return (*this);
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

float Fixed::toFloat( void ) const
{
    return (fixedNb / (float)(1 << fracBits));
};

int Fixed::toInt( void ) const
{
    return (fixedNb >> fracBits);
};

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
};

int Fixed::getRawBits( void ) const
{
    return (fixedNb);
};

void Fixed::setRawBits( int const s_raw )
{
    fixedNb = s_raw;
};
