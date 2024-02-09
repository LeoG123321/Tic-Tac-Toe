#include <string>
using namespace std;
class Board
{
private:
	string one, two, three, four, five, six, seven, eight, nine;

public:
	Board();
	
	void displayBoard();

	void getCell(int);
	void setCell(int, char);
};

