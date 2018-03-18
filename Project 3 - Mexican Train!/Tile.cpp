#include "Tile.h"

Tile::Tile()
{
	data1 = 0;
	data2 = 0;
	next = NULL;
}

Tile::Tile(int d1, int d2)
{
	data1 = d1;
	data2 = d2;
	next = NULL;
}

int Tile::getData1()
{
	return data1;
}

int Tile::getData2()
{
	return data2;
}

Tile * Tile::getNext()
{
	return this->next;
}

void Tile::setData1(int d)
{
	data1 = d;
}

void Tile::setData2(int d)
{
	data2 = d;
}

void Tile::setNext(Tile *n)
{
	next = n;
}

Tile::~Tile()
{
}
