#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "vec2.h"

class Poo
{
public:
	void Init( const vec2& pos_in,const vec2& vel_in );
	void Update( float dt);
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
	
private:
	vec2 pos;
	vec2 vel;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	bool initialized = false;
};