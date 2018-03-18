#pragma once
#include "Tile.h"
class Playerhand :
	public Tile
{
private:
	int num;
	Tile *head;
public:
	//constructors
	Playerhand();
	Playerhand(int n, Tile *h);
	//functions
	void print();
	void add(int x, int y);
	void remove(int x, int y);
	bool search(int x, int y);
	~Playerhand();
};

