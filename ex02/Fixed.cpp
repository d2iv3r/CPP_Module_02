/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:07:35 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/24 10:07:35 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

const int Fixed::fracBits = 8;

//  CONSTRUCTORS
Fixed::Fixed() { fixedNb = 0; };

//  INT CONSTRUCTOR
Fixed::Fixed(const int num) { fixedNb = (num << fracBits); };

//  FLOAT CONSTRUCTOR
Fixed::Fixed(const float num) { fixedNb = roundf(num * (1 << fracBits)); };

//  COPY CONSTRUCTOR
Fixed::Fixed(const Fixed &other) { fixedNb = other.getRawBits(); };

//  GETTER AND SETTER
int Fixed::getRawBits( void ) const { return (fixedNb); };
void Fixed::setRawBits( int const s_raw ) { fixedNb = s_raw; };

//  TO INT and TO FLOAT
float Fixed::toFloat( void ) const { return (fixedNb / (float)(1 << fracBits)); };
int Fixed::toInt( void ) const { return (fixedNb >> fracBits); };

//  ASSIGNEMENT OPERATOR
Fixed &Fixed::operator=(const Fixed &assign) { return (fixedNb = assign.fixedNb, *this); };

////////////////  OPERATORS OVERLOADNING  ////////////////

//  INSERTION OPERATOR
std::ostream& operator<<(std::ostream &out, const Fixed &fixed) { return (out << fixed.toFloat(), out); };

//  COMPARISON OPERATORS
bool Fixed::operator>(const Fixed &r) const { return (this->fixedNb > r.fixedNb); };

bool Fixed::operator<(const Fixed &r) const { return (this->fixedNb < r.fixedNb); };

bool Fixed::operator<=(const Fixed &r) const { return (this->fixedNb <= r.fixedNb); };

bool Fixed::operator>=(const Fixed &r) const { return (this->fixedNb >= r.fixedNb); };

bool Fixed::operator==(const Fixed &r) const { return (this->fixedNb == r.fixedNb); };

bool Fixed::operator!=(const Fixed &r) const { return (this->fixedNb != r.fixedNb); };

// pre-increment & pre-decrement operators
Fixed& Fixed::operator++( void ) { return (++fixedNb, *this); };

Fixed& Fixed::operator--( void ) { return (--fixedNb, *this); };

// post increment & post decrement operators
Fixed Fixed::operator++( int )
{
    Fixed tmp(*this);
    this->fixedNb++;
    return (tmp);
}

Fixed Fixed::operator--( int )
{
    Fixed tmp(*this);
    this->fixedNb--;
    return (tmp);
};

// The 4 arithmetic operators
Fixed Fixed::operator+(const Fixed &n) const { return (Fixed(this->toFloat() + n.toFloat())); };

Fixed Fixed::operator-(const Fixed &n) const { return (Fixed(this->toFloat() - n.toFloat())); };

Fixed Fixed::operator*(const Fixed &n) const { return (Fixed(this->toFloat() * n.toFloat())); };

Fixed Fixed::operator/(const Fixed &n) const { return (Fixed(this->toFloat() / n.toFloat())); };

//  MIN & MAX
Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a < b) ? a : b; };

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) { return (a < b) ? a : b; };

Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; };

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) { return (a > b) ? a : b; };

//  DESTRUCTOR
Fixed::~Fixed() {};
