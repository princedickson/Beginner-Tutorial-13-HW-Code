#pragma once
#include "Graphics.h"
#include "Dude.h"
#include "vec2.h"
class Goal
{
public:
	Goal(const vec2& pos_in)
		:
		pos( pos_in )
	{}
	void Draw(Graphics& gfx) const
	{
		gfx.DrawRectDim( int(x),int( y),int(dimension), int(dimension), c);
	}
	bool TestCollision(const Dude& dude) const
	{
		const float duderight = dude.GetPos().x + dude.GetWidth();
		const float dudebottom = dude.GetPos().y + dude.GetHeight();
		const float pooright = x + dimension;
		const float poobottom = y + dimension;

		return
			duderight >= x &&
			dude.GetPos().x <= pooright &&
			dudebottom >= y &&
			dude.GetPos().y <= poobottom;
	}
	void Respawn(const vec2& pos_in)
	{
		pos = pos_in;
	}
	void UpdateColor()
	{
		if (colorIncreasing)
		{
			if (c.GetR() >= 253)
			{
				colorIncreasing = false;
			}
			else
			{
				c = Color(c.GetR() + 2, c.GetG() + 4, c.GetB() + 4);
			}
		}
		else
		{
			if (c.GetR() <= 127)
			{
				colorIncreasing = true;
			}
			else
			{
				c = Color(c.GetR() - 2, c.GetG() - 4, c.GetB() - 4);
			}
		}
	}
private:
	static constexpr float dimension = 20;
	Color c = { 127,0,0 };
	bool colorIncreasing = true;
	float x;
	float y;
	vec2 pos;
};