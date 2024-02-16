#include "Board.cpp"
class Gameplay
{
private:
	int turn;
	Board board;

public:
	Gameplay();

	void gameRun();
	void playerInput(char);
	bool playerWin();
};