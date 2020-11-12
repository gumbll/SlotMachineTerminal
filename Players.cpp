#include "Players.h"
#include <iostream>
#include <string>
using namespace std;


int Players::GetMoney() {
	return this->money;
}


string Players::GetName() {
	return this->name;
}


void Players::SetMoney(int money) {
	this->money = money;
}


void Players::SetName(string name) {
	this->name = name;
}


void Players::AddMoney(int value) {
	this->money += value;
}


void Players::RemoveMoney(int value) {
	this->money += -value;
}


Players::Players(string name) {

}


Players::~Players() {

}