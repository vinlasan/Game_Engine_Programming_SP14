#pragma once
#include <string>

using namespace std;
class Actor
{
private:
	string name;
	string attack;
	string element;
	int power;
public:
	Actor(string& input);
	virtual ~Actor(void);
	string DisplayInfo();
	string GetName();
	bool DefeatOpponent(Actor& opponent);
};