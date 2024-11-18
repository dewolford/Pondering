/*
    Name:       Chain.h
    Purpose:    Hold class and function prototypes for shop chains
*/

#ifndef CHAIN_H
#define CHAIN_H

#include "Shop.h"
#include "duckclass.h"
#include <iostream> 
using namespace std; 

class Chain
{
    private:
    Shop shopFunctions[MAX_ARRAY];

    public:
    Chain()
    {
        for(int x = 0; x<MAX_ARRAY; x++)
        {
            this->shopFunctions[x].settLocation(" ");
            this->shopFunctions[x].setShopName(" ");
            this->shopFunctions[x].setNumOfDucks(0);
        }
        
    }
    Chain(int i, string location, string name, int numDucks)
    {
        shopFunctions[i].settLocation(location);
        shopFunctions[i].setShopName(name);
        shopFunctions[i].setNumOfDucks(numDucks);
    }
    ~Chain()
    {
        cout << "\n\nThe Chain has been closed.";
    }

    //setters
    void setShopFunctions(Shop* shop, int x, string name, string location, int numDucks);

    //getters
    string getShopName(Shop* shop, int x) const;
    string getLocation(Shop* shop, int x) const;
    int getCapacity(Shop* shop, int x) const;
    int getNumOfDucks(Shop* shop, int x) const;
    string getDuckName(Shop* shop, int x, Duckies* duck, int i) const;
    string getDuckBreed(Shop* shop, int x, Duckies* duck, int i) const;
    string getDuckHat(Shop* shop, int x, Duckies* duck, int i) const;
    int getDuckAge(Shop* shop, int x, Duckies* duck, int i) const;
    int setDST(Shop* shop, int x, Duckies* duck, int i) const;

    void displayDuck(Duckies* thisShop, int i, int numDucks, Shop* shop, int x);
    
}; 

#endif