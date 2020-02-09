#include "Player.h"

void Player::SetName(const string &name)
{
	this->name = name;
}

Player::Player(string n, int newhp)
{
	name = n;
	hp = newhp;
}

void Player::Attack(Player &otherPlayer)
{
	cout << name << " is attacking " << otherPlayer.name << endl;
	otherPlayer.SetHP(otherPlayer.GetHP() - 10);


}

int Player::maxHP = 1000;

//:: = scope resolution operator