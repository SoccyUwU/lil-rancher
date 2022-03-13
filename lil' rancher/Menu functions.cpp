#include<vector>
#include<string>
#include<iostream>
#include<exception>
#include "inventory.h"
#include "item.h"
#include "slime.h"
using namespace std;
extern int show_inventory ( );
int init (string pName)
{
	//initalize the game and all varibles
	inventory player_inv;
	//jump to the main game loop
}
//return if the player erase, or no
bool reset ( ) noexcept
{
	//print message
	cout << "Are you sure that you're going to say goodbye to everything"
		"that you now possess?" << endl;
	cout << "This can not be undo!" << endl;
	cout << "Enter 'y' to continue, or 'n' to go back." << endl;
	char mess;
	cin >> mess;
	system ("cls");
	if (mess == 'y')
	{
		cout << "Then it was erased, not a trace left." << endl;
		return true;
	}
	else
	{
		cout << "You spared it." << endl;
		return false;
	}
	//reset every varible created
	//Just realized that when the program close, it will automatically delete every varible
	//Or set them to the default state
	//delete all dynamic memories
	//same as above
	//clean up
	//silly me
}
int sell_menu (inventory player)
{
	//initalize the selling menu
	cout << "wElcoM tO da tEM sHOp!" << endl;
	cout << "What would you sell?" << endl;
	system ("cls");
	//print the menu
	show_inventory ( );
	//loop of selling
	char exi;
	int ind;
	while (cin >> exi && exi != 'n')
	{
		cin >> ind;
		try
		{
			if (!player.ck_range_p (ind))
			{
				throw out_of_range ("item index out of range");
			}
		}
		catch (out_of_range)
		{
			cout << "That's a invalid number. Input another one.";
			sell_menu (player);
		}
	}
	//quit
	system ("cls");
	cout << "Bye then, come next time!" << endl;
	return 0;
}
int show_inventory ( )
{
	//print out the inventory
	//take input and do them
}
int quest ( )//yet to be added
{
	//print out the wip message
}