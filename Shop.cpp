/*
    File Name:      Shop.cpp
    Purpose:        implement the functions of Shop
*/

//adding header file
#include "Shop.h"
#include "duckclass.h"



//setters
void setShopName(string shopName)
{
    this->shopName = shopName; 
}
void settLocation(string getLocation)
{
    this->location = getLocation;
}
void setCapacity(int capacity)
{
    this->capacity = capacity;
}
void setNumOfDucks(int numOfDucks)
{
    this->numOfDucks = numOfDucks;
}
void setDuckfunctions(Duckies* duck, int x, string name, string breed, string hat, int age, int shopTime)
{
    duck[x].setName(name);
    duck[x].setBreed(breed);
    duck[x].setHat(hat);
    duck[x].setAge(age);
    duck[x].setShopTime(shopTime);
}




//getters
string getShopName() const
{
    return this->shopName; 
}
string getLocation() const
{
    return this->location;
}
int getCapacity() const
{
    return MAX_ARRAY;
}
int getNumOfDucks() const
{
    return this->numOfDucks; 
}
string setDuckname(Duckies* duck, int x) 
{
   return duck[x].getName();
}
string setDuckbreed(Duckies* duck, int x)
{
   return duck[x].getBreed();
}
string setDuckHat(Duckies* duck, int x) 
{
   return duck[x].getHat();
}
int setDuckage(Duckies* duck, int x) 
{
   return duck[x].getAge();
}
int setDuckST(Duckies* duck, int x)
{
   return duck[x].getShopTime();
}


void displayDuck(Duckies* thisShop, int i, int numDucks) //pointer to duck array
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

//function that gets the average time for all the ducks in the shop
void shopStatus(int getShopTime())
{

}



