#include "vec2.h"


vec2::vec2(float x_in, float y_in) 
	:
	x( x_in ),
	y( y_in )
{
}

vec2 vec2::operator+(const vec2 & rhs) const  
{
	return vec2( x + rhs.x,y + rhs.y);
}

vec2& vec2::operator*(const vec2& rhs) 
{
	return *this = *this + rhs;
}

vec2 vec2::operator*(float rhs) const
{
	return vec2(x * rhs, y * rhs);
}

vec2& vec2::operator*=(float rhs)
{
	return *this = *this * rhs;
}

vec2& vec2::operator+=(const vec2& rhs)
{
	return *this = *this + rhs;
}
