#include "Board.h"
class Board
{
private:
	string one, two, three, four, five, six, seven, eight, nine;

public:
	Board::Board() {

	}

	void displayBoard();

	void getCell(int);
	void setCell(int, char);
};