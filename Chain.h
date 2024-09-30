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
    Shop shopFunctions[MAX_ARRAY];
    
    public:
    //contructors
    Chain(); //default
    Chain(Shop*); //overloaded
    
    //deconstructor
    ~Chain();

    //setter
    void buildShop(Shop*, int);

    //getter
    void shopStatus();

    void displayShop(Shop* shopFunctions);

};

#endif