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
        int ducksInShop[10];

        Duckies* ducksInShop;

    public:
        //overloaded Shop constructor
        Shop(string a, string b, int c, int d);

        //getters
        string getShopName();
        string getLocation();
        int getDuckNum();

        //setters
        void setLocation(string);
        void setShopName(string);
        void setDuckNum(int);
      
        //destructor function
        ~Shop();
};


#endif
