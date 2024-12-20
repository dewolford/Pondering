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
void Shop::setDuckfunctions(Duckies* duck, int x, string name, string breed, string hat, int age, int shopTime)
{
    duck[x].setName(name);
    duck[x].setBreed(breed);
    duck[x].setHat(hat);
    duck[x].setAge(age);
    duck[x].setShopTime(shopTime);
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
int Shop::getCapacity() const
{
    return MAX_ARRAY;
}
int Shop::getNumOfDucks() const
{
    return this->numOfDucks; 
}
string Shop::setDuckname(Duckies* duck, int x) 
{
   return duck[x].getName();
}
string Shop::setDuckbreed(Duckies* duck, int x)
{
   return duck[x].getBreed();
}
string Shop::setDuckHat(Duckies* duck, int x) 
{
   return duck[x].getHat();
}
int Shop::setDuckage(Duckies* duck, int x) 
{
   return duck[x].getAge();
}
int Shop::setDuckST(Duckies* duck, int x)
{
   return duck[x].getShopTime();
}

void Shop::displayDuck(Duckies* thisShop, int i, int numDucks) //pointer to duck array
{
    for(int x =0; x<numDucks-1; x++)
    {
        cout << "******* Duck " << x+1 << "*******" << endl;
        cout << setw(15) << left << "Customer Name:" << right <<  thisShop[i].getName() <<endl;
        cout << setw(15) << left << "Customer Breed:" << right <<  thisShop[i].getBreed() <<endl;
        cout << setw(15) << left << "Customer Age:" << right << thisShop[i].getAge() << endl;
        cout << setw(15) << left << "Customer Hat:" << right << thisShop[i].getHat()<< endl; 
        cout << setw(15) << left << "Customer Shop Time:" << right << thisShop[i].getShopTime() << endl; 
    }
}   










