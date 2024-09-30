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
#include <iomanip> 

//constructors
Chain::Chain() //default
{
    for(int x = 0; x < MAX_ARRAY; x++)
    {
        // shopFunctions[x] = blank
        shopFunctions[x].setShopName(" ");
        shopFunctions[x].settLocation(" ");
        shopFunctions[x].setNumOfDucks(0);
        shopFunctions[x].setCapacity(MAX_ARRAY);
    }
}

Chain::Chain(Shop* temp) //overloaded
{
    for(int x = 0; x < MAX_ARRAY; x++)
    {   
        // shopFunctions[x] = temp
        shopFunctions[x].setShopName(temp->getShopName());
        shopFunctions[x].settLocation(temp->getLocation());
        shopFunctions[x].setNumOfDucks(temp->getNumOfDucks());
        shopFunctions[x].setCapacity(temp->getCapacity());
    }
}

//destructor
Chain::~Chain()
{
    //delete something; 

    cout << "\n\nDeleted";
}

//setter
void Chain::buildShop(Shop* shop, int x)
{
    
}

//getter
void Chain::shopStatus()
{

}

void displayShop(Shop* shopFunctions)
{
    //print out shops
    for(int x = 0; x < MAX_ARRAY; x++)
    {
        cout << setw(25) << left << "Shop Name: " << setw(10) << right << shopFunctions[x].getShopName() << endl;
        cout << setw(25) << left << "Shop Location: " << setw(10) << right << shopFunctions[x].getLocation() << endl;
        cout << setw(25) << left << "Current Number of Ducks in Store: " << setw(10) << right << shopFunctions[x].getNumOfDucks() << endl;
        cout << setw(25) << left << "Capacity of the Store: " << setw(10) << right <<shopFunctions[x].getCapacity() << endl;
    }
}