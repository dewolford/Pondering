/*
    File Name:      Shop.cpp
    Purpose:        implement the functions of Shop
*/

//adding header file
#include "Shop.h"
#include "duckclass.h"

//constructor
Shop::Shop(string a, string b, int c, int d)
{
    shopName = a;
    location = b;
    capacity = c;
    numOfDucks = d;
}

//destructor
Shop::~Shop()
{
    
}