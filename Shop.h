/************************
 * Name:Shop.h
 * Purpose: hold class and functions for object duckies
 **********************/

#ifndef Shop_h
#define Shop_h

#include<string> 
#include<iomanip> 
#include<iostream> 

#include "duckclass.h"

using namespace std;
const int MAX_ARRAY = 10;


class Shop //class declaration/definition
{
    private:
        string shopName, location; 
        int capacity, numOfDucks;
        Duckies duckFunctions[MAX_ARRAY];      

    public:
        //overloaded Shop constructor
        Shop(string , string , int , int )
        {
            //setters
            void setLocation(string);
            void setShopName(string);
            void setDuckNum(int);      
        }
//constructor
Shop()
{
    this->shopName = " ";
    this->location = " ";
    this->capacity = 0;
    this->numOfDucks = 0;
    for(int x = 0; x < MAX_ARRAY; x++)
    {
        duckFunctions[x].setName(" ");
        duckFunctions[x].setBreed(" ");
        duckFunctions[x].setHat(" ");
        duckFunctions[x].setAge(0);
        duckFunctions[x].setShopTime(0);
    }
}

//overloaded constructor
Shop(int i, string name, string breed, string hat, int age, int time)
{

    duckFunctions[i].setName(name);
    duckFunctions[i].setBreed(breed);
    duckFunctions[i].setHat(hat);
    duckFunctions[i].setAge(age);
    duckFunctions[i].setShopTime(time);
    
}
//destructor
~Shop()
{
    cout << "\n\nThe shop has been torn down.";
}

//setters
void setShopName(string shopName);
void settLocation(string getLocation);
void setCapacity(int capacity);
void setNumOfDucks(int numOfDucks);
void setDuckfunctions(Duckies* duck, int x, string name, string breed, string hat, int age, int shopTime);   

//getters
string getShopName() const;
string getLocation() const;
int  getCapacity() const;
int getNumOfDucks() const;

//allows us to access duck 
string setDuckname(Duckies* duck, int x);
string setDuckbreed(Duckies* duck, int x);
string setDuckHat(Duckies* duck, int x);
int setDuckage(Duckies* duck, int x);
int setDuckST(Duckies* duck, int x);
void displayDuck(Duckies* thisShop, int i, int numDucks);

};



#endif
