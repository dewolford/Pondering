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

const int NUM = 15;

class Chain
{
    private:
    Shop* shopFunctions = new Shop[NUM];
    
    public:
    //contructors
    Chain(); //default
    Chain(Shop*); //overloaded
    
    //deconstructor
    ~Chain();

    //mutator
    void buildShop(Shop*);

    //accessors
    Shop* getShop() const;
    void shopStatus();

}

#endif