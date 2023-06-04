#include <iostream>
#include <windows.h>
#include "hero.h"
using namespace std;

int main()
{
	// instasiasi
	Hero hero;
		hero.locate(100, 100);
		hero.draw();
		
		for (int i = 0; i < 25; i++)
		{
			hero.move_forward();
			hero.draw();
			Sleep(250);
		}
		
		return 0;
}