#pragma once
#include<vector>
#include<string>
#include "item.h"
#include "slime.h"
using std::vector;
using std::string;
class inventory
{
	vector<item> pile;
	vector<slime> slimes;
	string name;
public:
	inventory ( ) = default;
	~inventory ( ) = default;
	//check to see if the index for finding a slime is out of range
	bool ck_range_s (int range)
	{
		if (slimes.size ( ) <= range)
			return true;
		else
			return false;
	}
	//check to see if the index for finding an item is out of range
	bool ck_range_p (int range)
	{
		if (pile.size ( ) <= range)
			return true;
		else
			return false;
	}
	void s_name (string newname) noexcept
	{
		this->name = newname;
	}
}; //the same as a player as for now