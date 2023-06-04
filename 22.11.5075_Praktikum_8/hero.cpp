#include <iostream>
#include "hero.h"

// constructor
Hero::Hero()
{
	std::cout << "a Hero is created\n";
}

// constructor
Hero::~Hero()
{
	std::cout << "a Hero is created\n";
}

// menempatkan hero pada posisi x, y
void Hero::locate (int _x, int _y)
{
	posX = _x;
	posY = _y;
}

// menampilkan hero pada posisi x, y
void Hero::draw()
{
	std::cout << "Draw a hero at " << posX << ", " << posY << std::endl;
}

// bergerak maju. sumbu y minus
void Hero::move_forward()
{
	--posY;
}

// bergerak mundur. sumbu y plus
void Hero::move_backward()
{
	++posY;
}

// bergerak maju. sumbu x minus
void Hero::move_left()
{
	--posX;
}

// bergerak maju. sumbu x minus
void Hero::move_right()
{
	++posX;
}



