/****************************************
*    Name:       Chain.cpp              *
*    Purpose:    Chain.h functions      *
*****************************************/

#include "Chain.h"
#include "Shop.h"
#include "duckclass.h"

#include "Chain.h"
#include "Shop.h"
#include "duckclass.h"
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip> 
using namespace std;

//setters
void Chain::setShopFunctions(Shop* shop, int x, string name, string location, int numDucks)
{
    shop[x].setShopName(name);
    shop[x].settLocation(location);
    shop[x].setNumOfDucks(numDucks);
}
//getters
    string Chain::getShopName(Shop* shop, int x) const
    {
        return shop[x].getShopName();
    }
    string Chain::getLocation(Shop* shop, int x) const
    {
        return shop[x].getLocation();
    }
    int Chain::getCapacity(Shop* shop, int x) const
    {
        return shop[x].getCapacity();
    }
    int Chain::getNumOfDucks(Shop* shop, int x) const
    {
        return shop[x].getNumOfDucks();
    }
    string Chain::getDuckName(Shop* shop, int x, Duckies* duck, int i) const
    {
        return shop[x].setDuckname(duck, i);
    }
    string Chain::getDuckBreed(Shop* shop, int x, Duckies* duck, int i) const
    {
        return shop[x].setDuckbreed(duck, i);
    }
    string Chain::getDuckHat(Shop* shop, int x, Duckies* duck, int i) const
    {
        return shop[x].setDuckHat(duck, i); 
    }
    int Chain::getDuckAge(Shop* shop, int x, Duckies* duck, int i) const
    {
        return shop[x].setDuckage(duck, i); 
    }
    int Chain::setDST(Shop* shop, int x, Duckies* duck, int i) const
    {
        return shop[x].setDuckST(duck, i); 
    }

//display shop

void displayDuck(Duckies* thisShop, int i, int numDucks, Shop* shop, int x)
{
    shop[x].displayDuck(thisShop, i, numDucks);
}


