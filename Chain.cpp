/****************************************
*    Name:       Chain.cpp              *
*    Purpose:    Chain.h functions      *
*****************************************/

#include "Chain.h"
#include "Shop.h"
#include "duckclass.h"
#include <iostream>
#include <string>
#include <fstream>

//constructors
Chain::Chain() //default
{
    for(int x = 0; x < MAX_ARRAY; x++)
    {
        // shopFunctions[x] = blank
        shopFunctions[x].setShopName("Shop Name");
        shopFunctions[x].setLocation("Location");
        shopFunctions[x].setDuckNum(0);
    }
}

Chain::Chain(Shop* temp) //overloaded
{
    for(int x = 0; x < MAX_ARRAY; x++)
    {   
        // shopFunctions[x] = temp
        shopFunctions[x].setShopName(temp->getShopName());
        shopFunctions[x].setLocation(temp->getLocation());
        shopFunctions[x].setDuckNum(temp->getDuckNum());
    }
}

//destructor
Chain::~Chain()
{
    //delete something; 

    cout << "\n\nDeleted";
}

//setter
void Chain::buildShop(Shop*)
{
    //put the shop into into an array
}

//getter
void Chain::shopStatus()
{
    //print out shops
    for(int x = 0; x < MAX_ARRAY; x++)
    {
        cout << setw(25) << left << shopFunctions[x].getShopName();
        cout << setw(25) << left << shopFunctions[x].getLocation();
        cout << setw(25) << left << shopFunctions[x].getDuckNum() << endl;
    }
}