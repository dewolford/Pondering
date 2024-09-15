/************************
 * Name:Shop.h
 * Purpose: hold class and functions for object duckies
 */

#include<string> 
#include<iomanip> 
#include<iostream> 
using namespace std;

#include "duckclass.h"

#ifndef Shop_h
#define Shop_h

    class Shop
    {
        private:
        string shopName, location; 
        int capacity, numOfDucks;
        Duckies* ducksInShop;
        int* numDucksShop;

        public:

        Shop(string a, string b, int c, int d)
        {
            shopName = a;
            location = b;
            capacity = c;
            numOfDucks = d;
        };

    };
#endif
