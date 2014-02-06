#pragma once
#include <vector>
#include <string>
#include "Actor.h"

using namespace std;

class ResourseLoader
{
private:
	vector<Actor> curvec;
public:
	ResourseLoader(void);
	virtual ~ResourseLoader(void);

	vector<Actor> LoadActorFile(string& inputfn);
	void DisplayActors();

	bool GetActor(int i, Actor* curActor);
	vector<Actor> GetActors();
};