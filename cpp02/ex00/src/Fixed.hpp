#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int number;
	static const int fract_bits = 8;

public:
	Fixed();
	Fixed( const Fixed& original );
	Fixed& operator=(const Fixed& value);
	~Fixed();

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif