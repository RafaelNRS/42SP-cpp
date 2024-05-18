#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int number;
	static const int fract_bits = 8;

public:
	Fixed();
	Fixed( const int int_number );
	Fixed( const float float_number );
	Fixed( const Fixed& original );
	Fixed& operator=( const Fixed& value );
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt( void ) const;
	float	toFloat( void ) const;
};

std::ostream&	operator<<(std::ostream &out, Fixed const &fixed);

#endif