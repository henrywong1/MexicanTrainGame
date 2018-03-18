#include "Playerhand.h"

// constructors
Playerhand::Playerhand()
{
	num = 0;
	head = NULL;
}

Playerhand::Playerhand(int n, Tile * h)
{
	num = n;
	head = h;
}
// functions
void Playerhand::print()
{
	Tile *ptr = head;
	cout << "{";
	while (ptr != NULL) {
		cout << ptr->getData1();
		cout << "|";
		cout << ptr->getData2();
		cout << ",";
		ptr = ptr->getNext();
	}
	cout << " }" << endl;

}
// 2->3->4->null 
//add 5
//1. make new node with data of 5  and pointer of next to null (5->null)
//2. 
void Playerhand::add(int x, int y)
{	
	if (head == NULL) {
		head = new Tile(x, y);
	}
	else {
		Tile *current = head;
		while (current->getNext() != NULL) {
			current = current->getNext();
		}
		Tile *node = new Tile(x, y);
		current->setNext(node);
	}
}

void Playerhand::remove(int x, int y)
{
	if (head == NULL) {
		cout << "Nothing to remove" << endl;
	}
	else if (x == head->getData1() && y == head->getData2()) {
		Tile *temp = head;
		head = head->getNext();
		delete temp;
	}

	else {
		Tile *ptr = head;
		while (ptr->getNext() != NULL) {
			if (ptr->getNext()->getData1() == x && ptr->getNext()->getData2() == y) {
				Tile *temp = ptr->getNext();
				ptr->setNext(temp->getNext());
				delete temp;
				return;
			}
			ptr = ptr->getNext();
		}
	}
}

//Checks if number is found in hand
bool Playerhand::search(int x, int y)
{
	Tile *ptr = head;
	while (ptr != NULL) {
		if (ptr->getData1() == x && ptr->getData2() == y) {	
			return true;
		}
		ptr = ptr->getNext();

	}
}


Playerhand::~Playerhand()
{
}
