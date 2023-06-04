// class: Hero.h

class Hero
{
	// constructor
public:
	Hero(); 
	void move_forward();
	void move_backward();
	void move_left();
	void move_right();
	void locate(int _x, int _y);
	void draw();
	~Hero();
	
	private:
		int posX;
		int posY;
};