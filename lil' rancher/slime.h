#pragma once
class slime
{
	bool exert = false; //determines whether they'll produce a plort shortly
	int level = 1; //determines the level of the slime; the higher it is the more the plort is worth
public:
	slime ( ) = default;
	virtual ~slime ( ) = default;
};