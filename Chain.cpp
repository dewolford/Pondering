/*
    Name:       Chain.cpp
    Purpose:    Chain.h functions
*/

#include "Chain.h"
#include <iostream>
#include <string>
#include <fstream>

//constructors
Chain::Chain() //default
{
    for(int x = 0; x < NUM; x++)
    {
        // shopFunctions[x] = blank
    }
}

Chain::Chain(Shop* temp) //overloaded
{
    for(int x = 0; x < NUM; x++)
    {   
        // shopFunctions[x] = temp
    }
}

//destructor
Chain::~Chain()
{

}

//mutator
void Chain::buildShop(Shop*)
{

}

//accessors
Shop* Chain::getShop() const
{
    
}

void Chain::shopStatus()
{

}