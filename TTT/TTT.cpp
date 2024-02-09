/*
Leonardo Gonzalez		8/26/23

Lab	4					Tic-Tac-Toe

Objective: Create a Function playerChoice( )

Commands: playerChoice(string), board(), gameFinish()
*/

#include <ios>			//Interprets iostream
#include <iostream>		//Interprets setw()
#include <iomanip>		//Interprets cout <<
using namespace std;	//Allows use of cout without std ::

void board();				//Displays The Current Board
void playerChoice(string);	//Has the player choose the position of their X or O
void gameFinish();			//Checks if Either player has won

string one{ "1" }, two{ "2" }, three{ "3" }, four{ "4" }, five{ "5" }, six{ "6" }, seven{ "7" }, eight{ "8" }, nine{ "9" };	//Variables
bool win = false;	//flag if anyone has won

int main()
{															//Start Program

	board(); 

	playerChoice("X");	//Player 1 starts
	playerChoice("O");
	playerChoice("X");
	playerChoice("O");
	playerChoice("X");
	gameFinish();
	if (!win) {				//Checks if someone has won, if not, continue the game
		playerChoice("O");
		gameFinish();
		if (!win) {
			playerChoice("X");
			gameFinish();
			if (!win) {
				playerChoice("O");
				gameFinish();
				if (!win) {
					playerChoice("X");
					gameFinish();
					if (!win) {
						cout << "Game Over: Draw" << endl;	//After every position has been filled, and no one has one, it is a tie.
					}
				}
			}
		}
	}


}															//End Program

void board() {		//Displays The Current Board

	//Creating the board in quotes, shifting it over to the right using setw(), and printing it out using cout commands

	cout << "\n";
	cout << setw(70) << " _______________________ \n";
	cout << setw(70) << "|       |       |       |\n";
	cout << setw(48) << "|   " << one << "   |   " << two << "   |   " << three << "   |\n";
	cout << setw(70) << "|_______|_______|_______|\n";
	cout << setw(70) << "|       |       |       |\n";
	cout << setw(48) << "|   " << four << "   |   " << five << "   |   " << six << "   |\n";
	cout << setw(70) << "|_______|_______|_______|\n";
	cout << setw(70) << "|       |       |       |\n";
	cout << setw(48) << "|   " << seven << "   |   " << eight << "   |   " << nine << "   |\n";
	cout << setw(70) << "|_______|_______|_______|\n";
	cout << "\n";

}

void playerChoice(string choice) {	//Has the player choose the position of their X or O
	
	string num;

	tryAgain:

	if (choice == "X") {			//Displays if it's player 1 or player 2s turn
		cout << "Player 1: X" << endl;
	}
	else {
		cout << "Player 2: O" << endl;
	}

	cout << "Choose Your Location" << endl;
	cin >> num;

	if (num == one) {					//After the player chooses the position they would like their X or O
										//Checks if that spot is open. If open, replace that position with an X or an O, and Display the Board
		one = choice;
		board();
	}
	else if (num == two) {

		two = choice;
		board();
	}
	else if (num == three) {

		three = choice;
		board();
	}
	else if (num == four) {

		four = choice;
		board();
	}
	else if (num == five) {

		five = choice;
		board();
	}
	else if (num == six) {

		six = choice;
		board();
	}
	else if (num == seven) {

		seven = choice;
		board();
	}
	else if (num == eight) {

		eight = choice;
		board();
	}
	else if (num == nine) {

		nine = choice;
		board();
	}
	else {										//If the position is out of range, or the position is already filled, it tells the player to input something else
		cout << "Error, Try Again\n" << endl;
		goto tryAgain;
	}
}

void gameFinish() {		//Checks every win condition to see if anyone has won
	
	string winner;

	if (one == two && two == three) {
		win = true;
		winner = one;
	}
	else if (four == five && five == six) {
		win = true;
		winner = four;
	}
	else if (seven == eight && eight == nine) {
		win = true;
		winner = seven;
	}
	else if (one == five && five == nine) {
		win = true;
		winner = one;
	}
	else if (three == five && five == seven) {
		win = true;
		winner = three;
	}
	else if (one == four && four == seven) {
		win = true;
		winner = one;
	}
	else if (two == five && five == eight) {
		win = true;
		winner = two;
	}
	else if (three == six && six == nine) {
		win = true;
		winner = three;
	}

	if (win == true) {		//If someone has won, it finds out who won, and displays them a winner
		if (winner == "X") {
			cout << "Player 1 Wins!" << endl;
		}
		else {
			cout << "Player 2 Wins!" << endl;
		}
	}
}
