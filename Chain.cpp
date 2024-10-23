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


    
//setters
void Chain::setNameChain(Shop* shop, string name, int x)
{
    shop[x].setShopName(name);
}
void Chain::setLocationChain(Shop* shop, string location, int x)
{
    shop[x].settLocation(location);
}
void Chain::setCapacityChain(Shop* shop, int capacity, int x)
{
    shop[x].setCapacity(capacity);
}
void Chain::setNumDuckChain(Shop* shop, int ducks, int x)
{
    shop[x].setNumOfDucks(ducks);
}

//getters
string Chain::getNameChain(Shop* shop, int x) const
{   
    return shop[x].getShopName();
}
string Chain::getLocationChain(Shop* shop, int x) const
{
    return shop[x].getLocation();
}
int Chain::getCapacityChain(Shop* shop, int x) const
{
    return shop[x].getCapacity();
}
int Chain::getNumDuckChain(Shop* shop, int x) const
{
    return shop[x].getNumOfDucks();
}


//displays shop informat
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
