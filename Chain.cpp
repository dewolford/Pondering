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
        shopFunctions[x].shopName = "";
        shopFunctions[x].location = "";
        shopFunctions[x].numOfDucks = 0;
    }
}

Chain::Chain(Shop* temp) //overloaded
{
    for(int x = 0; x < MAX_ARRAY; x++)
    {   
        // shopFunctions[x] = temp
        shopFunctions[x].shopName = temp->shopName;
        shopFunctions[x].location = temp->location;
        shopFunctions[x].numOfDucks = temp->numOfDucks;
    }
}

//destructor
Chain::~Chain()
{
    //delete [] something; 

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