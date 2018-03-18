#pragma once
#include <iostream>
using namespace std;

class Tile
{
protected:
	Tile *next;
	int data1, data2;
public:
	//constructors
	Tile();
	Tile(int d1, int d2);
	//accessors
	int getData1();
	int getData2();
	Tile *getNext();
	//mutators
	void setData1(int d);
	void setData2(int d);
	void setNext(Tile *n);
	~Tile();
};

