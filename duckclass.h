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
    void setName(string name);
    void setBreed(string typOfDuck);
    void setHat(string hatType);
    void setAge(int Age);
    void setShopTime(int shopTime);


//getters
    string getName() const;
    string getBreed() const;
    string getHat() const;
    int getAge() const;
    int getShopTime() const;


//destructor
~Duckies()
{
    cout << "THE DUCK HAS BEEN MURDERED"; 
}


};
#endif