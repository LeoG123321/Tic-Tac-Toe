#include <string>
using namespace std;
class Board
{
private:
	string cells[10];

public:
	Board();
	
	void displayBoard();

	string getCell(int);
	void setCell(int, char);
};

