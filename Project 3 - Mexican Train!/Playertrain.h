#pragma once
#include "Tile.h"
class Playertrain :
	public Tile
{
private:
	Tile *head;
public:
	//constructors
	Playertrain();
	Playertrain(Tile *h);
	//functions
	void print();
	void add(int x, int y);
	void remove(int x, int y);
	~Playertrain();
};

