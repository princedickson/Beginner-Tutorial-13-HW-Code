#pragma once

class vec2
{
public:

	vec2() = default;
	vec2(float x_in, float y_in);
	vec2 operator+(const vec2& rhs) const;
	vec2& operator*(const vec2& rhs) ; 
	vec2 operator*(float rhs) const ; 
	vec2& operator*=(float rhs);
	vec2& operator+=(const vec2& rhs);
	float x;
	float y;

private:  
};