#pragma once // include guard 

#include <iostream>
#include <string>

using namespace std;

class Player 
{
public:
	Player() // no parametrs = default constructor
	{
		hp = 100;
		name = "John Doe";
		cout << "In Player's Default Constructor" << endl;
	}

	Player(string n, int newhp = 100);

	void SetName(const string &name);
	string GetName()
	{
		return name;
	}

	int GetHP()
	{
		return hp;
	}

	void SetHP(int newHP)
	{
		if (newHP < 0)
			newHP = 0;

		if (newHP > maxHP)
			newHP = maxHP;

		hp = newHP;
		if (hp == 0)
			cout << name << " died!" << endl;
	}

	// member functions, or Methods, or Operations
	void Attack(Player &otherPlayer);

	// Static functions can be called without
	// an object of the class
	static int GetMaxHP()
	{
		return maxHP;
	}

private: // private by default
	// member variables, or Fields
	string name;
	int hp = 100;
	Player *target = nullptr;

	// static varibale - all instances of this class
	// share static variable - there will only be
	// one maxHP even if there are 1000 characters
	static int maxHP;
	
};
