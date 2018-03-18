#include "Tile.h"
#include "Playerhand.h"
#include "Playertrain.h"
#include <time.h>
int main() {
	srand(time(NULL));
	int x, y, same=0;
	bool head = false;
	int count = 0;
	int size = 15;
	Playerhand a1;
	Playertrain a2;
	cout << "This is player hand";
	//Randomly pick your starting hand.
	for (int i = 0; i < 5; i++) {
		a1.add(rand() % 9, rand() % 9);
		count++;
	}
	a1.print();
	cout << "This is your train" << endl;
	a2.print();
	while (count > 0) {
		cout << "select the pair of numbers you would like to add to your train." << endl;
		cin >> x >> y;
		
		//Checks if the user values are in the hand.
		if (a1.search(x, y) != true) {
			cout << "No tile exist" << endl;
		}
		
		else  {
			if (x != same && head) {
				cout << "Tile does not match end of train." << endl;
			}
			else {
				head = true;
				//removes from hand, adds to train.
				a1.remove(x, y);
				count--;
				a2.add(x, y);
				same = y;

				cout << "Your hand now: " << endl;
				a1.print();
				cout << endl << "This is your train: " << endl;
				a2.print();
			}
		}
	}

	if (count == 0) {
		cout << "Player Wins! Computer Loses!" << endl;
	}
	system("PAUSE");
	return 0;
}
