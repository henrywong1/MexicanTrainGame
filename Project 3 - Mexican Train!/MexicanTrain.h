#pragma once
#include "Tile.h"
class MexicanTrain :
	public Tile
{
public:
	MexicanTrain();
	~MexicanTrain();

	void print();
	void add(int x, int y);
	void remove(int x, int y);
};

