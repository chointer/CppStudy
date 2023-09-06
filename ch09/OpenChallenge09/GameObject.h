#pragma once
class GameObject
{
protected:
	int distance;
	int x, y;
	int size_x, size_y;
public:
	GameObject(int startX, int startY, int distance, int size_x, int size_y) {
		this->x = startX; this->y = startY;
		this->distance = distance;
		this->size_x = size_x; this->size_y = size_y;
	}
	virtual ~GameObject() {};

	virtual void move() = 0;
	virtual char getShape() = 0;

	int getX() { return x; }
	int getY() { return y; }
	bool collide(GameObject* p) {
		if (this->x == p->getX() && this->y == p->getY()) return true;
		else return false;
	}
};

