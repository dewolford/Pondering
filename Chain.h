/*
    Name:       Chain.h
    Purpose:    Hold class and function prototypes for shop chains
*/

#ifndef CHAIN_H
#define CHAIN_H

#include <iostream>
#include <string>
#include <fstream>

#include "duckclass.h"
#include "Shop.h"

using namespace std;


class Chain
{
    private:
    Shop* shopFunctions[MAX_ARRAY];
    
    public:
    //contructors
    Chain(); //default
    Chain(int, string, string, int, int); //overloaded
    
    //deconstructor
    ~Chain()
    {
        delete [] shopFunctions[MAX_ARRAY];
    }

    //setters
    void setNameChain(Shop*, string, int);
    void setLocationChain(Shop*, string, int);
    void setCapacityChain(Shop*, int, int);
    void setNumDuckChain(Shop*, int, int);

    //getters
    Shop* getShop(int a) { 
        return shopFunctions[a]; 
    }
    string getNameChain(Shop*, int) const;
    string getLocationChain(Shop*, int) const;
    int getCapacityChain(Shop*, int) const;
    int getNumDuckChain(Shop*, int) const;
    

    void displayShop(Shop*);

};

#endif