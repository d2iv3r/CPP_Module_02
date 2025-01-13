/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:07:29 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/24 10:07:29 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int fixedNb;
        static const int fracBits;
    public:
        //  CONSTRUCTORS
        Fixed();
        Fixed(const int num);
        Fixed(const float num);
        Fixed(const Fixed &other);
        //  GETTER && SETTER
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        //  TOFLOAT & TOINT
        float toFloat( void ) const;
        int toInt( void ) const;
        //  Assignement OPERATOR
        Fixed &operator=(const Fixed &assign);
        //  Comparison Operators
        bool operator>(const Fixed &r) const;
        bool operator<(const Fixed &r) const;
        bool operator>=(const Fixed &r) const;
        bool operator<=(const Fixed &r) const;
        bool operator==(const Fixed &r) const;
        bool operator!=(const Fixed &r) const;
        // pre-increment & pre-decrement operators overloading
        Fixed &operator++( void );
        Fixed &operator--( void );
        // post increment & post decrement operators overloading
        Fixed operator++( int );
        Fixed operator--( int );
        // The 4 arithmetic operators
        Fixed operator+(const Fixed &n) const;
        Fixed operator-(const Fixed &n) const;
        Fixed operator*(const Fixed &n) const;
        Fixed operator/(const Fixed &n) const;
        //  Overloaded member functions
        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        //  DESTRUCTOR
        ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
