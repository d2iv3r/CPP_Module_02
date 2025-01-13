/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:11:31 by efarhat           #+#    #+#             */
/*   Updated: 2023/11/18 14:09:07 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

class Fixed
{
    private:
        int number;
        static const int bits;
    public:
        Fixed();
        Fixed(const Fixed &other);
        Fixed &operator=(const Fixed &assign);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
