/*
Human - родительский класс, содержащий базовые методы для всех персонажей
*/
#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human
{
public:
	int health;
	int damage;
	int atackSpeed;

	Human(int h, int d, int s);
	void attack(Human& enemy);
	bool isAlive() const;
	int getHealth() const;
};

#endif // HUMAN_H


