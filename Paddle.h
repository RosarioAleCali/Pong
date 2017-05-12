#pragma once
#ifndef GUARD_PADDLE_H
#define GUARD_PADDLE_H
#include <SFML\Graphics.hpp>
#include <iostream>

class Paddle {
public:
	sf::RectangleShape body;
	int height, width, x, y, player;
	Paddle(int height, int width, int x, int y, int player);
	void input();
};

#endif GUARD_PADDLE_H
