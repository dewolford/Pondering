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
    
    public:
    
//constructors
Duckies()
{
    this->name = " ";
    this->typOfDuck = " ";
    this->hatType = " ";
    this->age =0;
    this->shopTime = 0;
}

Duckies(string N, string B, string H, int A, int ST)
{
    this->name = N;
    this->typOfDuck = B;
    this->hatType = H;
    this->age = A;
    this->shopTime = ST; 
}
    
//setters
    void Duckies::setName(string name);
    void Duckies::setBreed(string typOfDuck);
    void Duckies::setHat(string hatType);
    void Duckies::setAge(int Age);
    void Duckies::setShopTime(int shopTime);


//getters
    string Duckies::getName() const;
    string Duckies::getBreed() const;
    string Duckies::getHat() const;
    int Duckies::getAge() const;
    int Duckies::getShopTime() const;


//destructor
Duckies::~Duckies()
{
    delete Duckies; 
}


};
#endif