/************************
 * Name:Shop.h
 * Purpose: hold class and functions for object duckies
 */

#ifndef Shop_h
#define Shop_h

#include<string> 
#include<iomanip> 
#include<iostream> 
using namespace std;



class Shop //class declaration/definition
{
    private:
        string shopName, location; 
        int capacity, numOfDucks;

        //dynamically allocate or use vector
        int ducksInShop[MAX_ARRAY];

        Duckies* ducksInShop;

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
}

//overloaded constructor
Shop(string a, string b, int c, int d)
{
    this->shopName = a;
    this->location = b;
    this->capacity = c;
    this->numOfDucks = d;
}

//destructor
Shop::~Shop()
{
    delete Shop; 
}

//setters
void Shop::setShopName(string shopName);
void Shop::settLocation(string getLocation);
void Shop::setCapacity(int capacity);
void Shop::setNumOfDucks(int numOfDucks);

//getters
string Shop::getShopName() const;
string Shop::getLocation() const;
int Shop:: getCapacity() const;
int Shop:: getNumOfDucks() const;

};



#endif
