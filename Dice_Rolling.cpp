#include <iostream>
#include <cstdlib>
#include <cstime>
using namespace std;
int main() {
	enum class Status {CONTINUE, WON, LOST};
	srand(static_cast<unsigned int>(time(0));
	unsigned int myPoint{0};
	Status gameStatus;
	unsigned int sumOfDice{rollDice()};
	switch (sumOfDice) {
		case 7:
		case 11:
		gameStatus = Status::WON;
		break;
		case 2:
		case 3:
		case 12:
		gameStatus = Status::LOST;
		break;
		default:
		gameStatus = Status::CONTINUE;
		myPoint = sumOfDice;
		cout << "Point is " << myPoint << endl;
		break;
	}
	while (Status::CONTINUE == gameStatus) {
		gameStatus = rollDice();
		if (gameStatus == myPoint) gameStatus = Status::WON;
		else if (gameStatus == 7) gameStatus = Status::LOST;
	}
	if (gameStatus == Status::WON) cout << "Player WON" << endl;
	else cout << "Player LOST" << endl;
}
unsigned int rollDice() {
	int dice1{1 + rand() % 6};
	int dice2{1 + rand() % 6};
	int sum{dice1 + dice2};
	cout << "Player rolled " << dice1 << " + " << dice2 << " = " << sum << endl;
	return sum;
}
