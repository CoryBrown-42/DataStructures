#pragma once
#include <iostream>
#include "Player.h"
using namespace std;

class PlayerVector
{

public:
	PlayerVector()
	{
		size = 0;
		capacity = 3;
		playerArray = new Player[capacity];
	}

	void PushBack(Player p)
	{
		if (size < capacity)
		{
			playerArray[size++] = p;
		}
		else
		{
			Grow();
			playerArray[size++] = p;
		}
	}
	void Grow()
	{
		Player* tempArray = new Player[capacity + 1];
		for (int i = 0; i < size; ++i)
		{
			tempArray[i] = playerArray[i];
			delete[] playerArray;						//If we wouldn't have deleted it it would be called a memory leak
			playerArray = tempArray;
		}
	}

	~PlayerVector()									//Destructor
	{
		delete[] playerArray;
	}
	

private:
	int size, capacity;
	Player* playerArray = nullptr;



};