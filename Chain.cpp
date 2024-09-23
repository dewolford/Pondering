/****************************************
*    Name:       Chain.cpp              *
*    Purpose:    Chain.h functions      *
*****************************************/

#include "Chain.h"
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

//mutator
void Chain::buildShop(Shop*)
{
    //put the shop into into an array
}

//accessors
void Chain::shopStatus()
{
    //print out shops
}