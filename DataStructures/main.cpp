#include <iostream>
#include <random>
#include <time.h>
#include <queue>
#include <stack>
#include <list>

#include "PlayerVector.h"
#include "Player.h"
#include "LinkedList.h"

using namespace std;



int main()
{
	cout << "Max HP for a player is: " << Player::GetMaxHP() << endl;
	Player mainCharacter;
	cout << mainCharacter.GetName() << endl;

	mainCharacter.SetName("Barbatos");
	cout << mainCharacter.GetName() << endl;
	cout << mainCharacter.GetHP() << endl;

	Player player2("Joe Bob", 50);
	mainCharacter.Attack(player2);
	mainCharacter.Attack(player2);
	mainCharacter.Attack(player2);
	mainCharacter.Attack(player2);
	mainCharacter.Attack(player2);
	mainCharacter.Attack(player2);
	cout << player2.GetHP() << endl;

	int num = 5;
	int* intPtr = &num;
	cout << intPtr << endl; // outputs address
	cout << *intPtr << endl; // de-references pointer, outputs value


	Player* playerPtr = &mainCharacter;
	// adding & to mainCharacter(object) gets the address
	cout << "Address of mainCharacter: " << playerPtr << endl;

	cout << "Character's name: " << (*playerPtr).GetName() << endl;

	cout << "Character's name:" << playerPtr->GetName() << endl;;
	playerPtr = &player2;
	cout << "Player2's name: " << playerPtr->GetName() << endl;

	// this pointer points at nothing
	// and we can check for that
	Player* ptr2 = nullptr;
	cout << ptr2 << endl;
	if (ptr2 == nullptr)
		cout << "ptr2 is ready to point at something" << endl;

	//cout << mainCharacter << endl; can't output an object

	int numPlayers = 4;
	//Player players[numPlayers]; can't do this
	Player* players = new Player[numPlayers];
	players[0].SetName("Sally");
	players[1].SetName("Fred");
	players[2].SetName("Bob");
	players[3].SetName("Jen");

	delete[] players; // deallocate your dynamic array

	PlayerVector players2;
	
	LinkedList::Node n;
	LinkedList intList;
	return 0;
}