# include "Fixed.hpp"

int main( void )
{
    ////////////////////// SUBJECT TESTS //////////////////////////
    {Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;}

    ////////////////// COMPARISON OPERATORS TESTS //////////////////
    // {Fixed a(1337);
    // Fixed b(6552);
    // if (a == b)
    //     std::cout << "a is equal b" << std::endl;
    // if (a != b)
    //     std::cout << "a is not equal b" << std::endl;
    // if (a > b)
    //     std::cout << "a is greater than b" << std::endl;
    // if (a < b)
    //     std::cout << "a is smaller than b" << std::endl;
    // if (b >= a)
    //     std::cout << "b is greater or equal a" << std::endl;
    // if (b <= a)
    //     std::cout << "b is smaller or equal a" << std::endl;
    // }

    //////////////////// ARITHMETIC OPERATORS TESTS /////////////////
    // {Fixed a(1337);
    // Fixed b(42);
    // Fixed c;
    // std::cout << "a + b = " << (a + b) << std::endl;
    // std::cout << "a - b = " << (a - b) << std::endl;
    // std::cout << "a * b = " << (a * b) << std::endl;
    // std::cout << "a / b = " << (a / b) << std::endl;
    // c = b * a;
    // std::cout << c << std::endl;
    // }
    /////////////////// INCREMENTATION & DECREMENTATION TESTS ////////////
    // {Fixed a(1);
    // std::cout << "++a = " << (++a) << std::endl;
    // std::cout << "--a = " << (--a) << std::endl;
    // std::cout << "a++ = " << (a++) << std::endl;
    // std::cout << "a = " << a << std::endl;
    // std::cout << "a-- = " << (a--) << std::endl;
    // std::cout << "a = " << a << std::endl;
    // Fixed b = ++a;
    // std::cout << "b = " << b << std::endl;}
    // Fixed a;
    // Fixed b = a++;
    // std::cout << b << std::endl;
    // std::cout << b << std::endl;

    //////////////////////////////// MIN & MAX TESTS ///////////////////////////
    // Fixed a(19);
    // Fixed b(15);
    // const Fixed c(100);
    // Fixed const d(153);
    // std::cout << "max(a, b) ==> " << (Fixed::max(a, b)) << std::endl;
    // std::cout << "min(a, b) ==> " << (Fixed::min(a, b)) << std::endl;
    // std::cout << "max(c, d) ==> " << (Fixed::max(c, d)) << std::endl;
    // std::cout << "min(c, d) ==>" << (Fixed::min(c, d)) << std::endl;
    // Fixed e = Fixed::max(a, b);
    // std::cout << e << std::endl;
    // Fixed a(10);
    // Fixed b(5);
    // b = a;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // Fixed c(128.5f / 25);
    // std::cout << "a = " << a << std::endl;
    // std::cout << "b = " << b << std::endl;
    // std::cout << "a / b = " << c << std::endl;
    // Fixed max(8388606.5f);
    // std::cout << max << std::endl;
    // std::cout << max << std::endl;
    // Fixed x;
    // // std::cout << 255 << std::endl;
    // std::cout << x << std::endl;
    // for (int i = 0; i < 256; i++)
    // {
        // std::cout << ++x << std::endl;
    // }
    // int nb = 2147483392;
    // std::cout << nb << std::endl;
    // Fixed a (13.75f);
    // Fixed b (37.25f);
    // Fixed c = a - b;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << c << std::endl;
    return 0;
}
