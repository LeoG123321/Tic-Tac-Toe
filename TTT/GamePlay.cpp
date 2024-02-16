#include "Gameplay.h"

Gameplay::Gameplay() {
	turn = 0;
}

void Gameplay::gameRun() {
	board.displayBoard();
	if (turn % 2 == 0)
		playerInput('X');
	else
		playerInput('O');
}

void Gameplay::playerInput(char input) {
	int num;

tryAgain:

	cout << "Player " << input << ":" << endl;
	cout << "Choose Your Location" << endl;
	cin >> num;

	if (num > 0 && num < 10) {
		if (board.getCell(num) != 'X' && board.getCell(num) != 'O') {
			board.setCell(num, input);
		}
		else {
			goto tryAgain;
		}
	}
	else {
		goto tryAgain;
	}

	board.displayBoard();
}
