#include "Board.h"
class Gameplay
{
private:
	Board board;

public:
	Gameplay();

	void gameRun();
	void playerInput(char);
	bool playerWin();
};