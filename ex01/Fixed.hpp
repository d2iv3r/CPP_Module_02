/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:29:26 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/23 21:06:48 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
        //  ASSIGNEMENT OPERATOR
        Fixed &operator=(const Fixed &assign);
        //  MEMBER FUNCTIONS
        float toFloat( void ) const;
        int toInt( void ) const;
        ~Fixed();
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
