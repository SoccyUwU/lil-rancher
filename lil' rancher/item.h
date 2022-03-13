#pragma once
#include "inventory.h"
class item
{
	friend inventory;
	int id = 0; //determine the sell price for now, and the display name
	int price = 0;
public:
	item ( ) = default;
	~item ( ) = default;
};