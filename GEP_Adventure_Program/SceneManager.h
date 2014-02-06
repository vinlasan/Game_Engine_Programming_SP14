#pragma once
#include <vector>
#include "Actor.h"

class SceneManager
{
public:
	SceneManager(void);
	~SceneManager(void);

	int PlayScene(int p1, int p2, vector<Actor>& actors);
};