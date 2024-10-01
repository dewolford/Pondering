/*
    File Name:      Shop.cpp
    Purpose:        implement the functions of Shop
*/

//adding header file
#include "Shop.h"
#include "duckclass.h"


//setters
void Shop::setShopName(string shopName)
{
    this->shopName = shopName; 
}
void Shop::settLocation(string getLocation)
{
    this->location = getLocation;
}
void Shop::setCapacity(int capacity)
{
    this->capacity = capacity;
}
void Shop::setNumOfDucks(int numOfDucks)
{
    this->numOfDucks = numOfDucks;
}


//getters
string Shop::getShopName() const
{
    return this->shopName; 
}
string Shop::getLocation() const
{
    return this->location;
}
int Shop:: getCapacity() const
{
    return MAX_ARRAY;
}
int Shop:: getNumOfDucks() const
{
    return this->numOfDucks; 
}





