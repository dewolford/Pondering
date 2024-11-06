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
void Chain::setShopFunctions(Shop* shop, int x, int i, string name, string location, int numDucks, Duckies* duck, string nameD, string breed, string hat, int age, int time)
{
    shop[x].setShopName(name);
    shop[x].settLocation(location);
    shop[x].setNumOfDucks(numDucks);
    shop[x].setDuckfunctions(duck, i, nameD, breed, hat, age, time);
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
    string Chain::getDuckBreed(Shop* shop, int x) const
    {
        return shop[x].
    }
    string Chain::getDuckHat(Shop* shop, int x) const
    {

    }
    int Chain::getDuckAge(Shop* shop, int x) const
    {

    }
    int Chain::setDST(Shop* shop, int x) const
    {

    }

//display shop

