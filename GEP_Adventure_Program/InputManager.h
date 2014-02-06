#pragma once
enum PlayCodes{PLAY, NEW_MATCH, NEW_GAME, EXIT, NONE};

class InputManager
{
private:
	PlayCodes lastAction;
	PlayCodes MapInputToCode(char choice);
public:
	InputManager(void);
	~InputManager(void);

	PlayCodes GetUserInput();
	bool GetActorChoices(int *p1, int *p2, int limit);
};