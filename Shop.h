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

#include "duckclass.h"

class Shop //class declaration/definition
{
    private:
        string shopName, location; 
        int capacity, numOfDucks;
        Duckies* ducksInShop;
        int* numDucksShop;

    public:
        //overloaded Shop constructor
        Shop(string a, string b, int c, int d);
      
        //destructor function
        ~Shop();
};


#endif
