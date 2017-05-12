#pragma once
#ifndef GUARD_BALL_H
#define GUARD_BALL_H

#include <SFML/Graphics.hpp>
#include "Variables.h"

class Ball {
public:
	sf::CircleShape ball;
	int size, x, y;
	sf::Vector2f velocity;
	Ball::Ball(int size, int x, int y);
	void move();
	void collides();
};

#endif GUARD_BALL_H
