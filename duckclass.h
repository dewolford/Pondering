/************************
 * Name:    duckclass.h
 * Purpose: hold class and functions for object duckies
 ************************/

#include<string> 
#include<iomanip> 
#include<iostream> 
#include "Shop.h"
#include "Chain.h"
using namespace std;

#ifndef duckclass_H
#define duckclass_H

class Duckies 
{
    //variables
    private:
    string name, typOfDuck, hatType;
    int age, shopTime; 

    //functions
    //constructor
    Duckies(); //default
    Duckies(string, string, string, int); //overloaded

    //destructor 
    ~Duckies();

    //print duck info
    //will print information on a particular costumer(duck) 
    void printDuck(Shop* ); //pointer to duck array

};
#endif