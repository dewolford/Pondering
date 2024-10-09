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

const int MAX_ARRAY = 10;

class Chain
{
    private:
<<<<<<< HEAD
    Shop* = new shopFunctions[MAX_ARRAY];
=======
    Chain shopFunctions[MAX_ARRAY];
>>>>>>> ad93fbeab61941bbd229b983d211a4bff3c50646
    
    public:
    //contructors
    Chain(); //default
    Chain(int, string, string, int, int); //overloaded
    
    //deconstructor
    ~Chain();

    //setters
    void setNameChain(Shop*, string, int);
    void setLocationChain(Shop*, string, int);
    void setCapacityChain(Shop*, int, int);
    void setNumDuckChain(Shop*, int, int);

    //getters
    string getNameChain(Shop*, int) const;
    string getLocationChain(Shop*, int) const;
    int getCapacityChain(Shop*, int) const;
    int getNumDuckChain(Shop*, int) const;
    

    void displayShop(Shop*);

};

#endif