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
    //functions
    //constructor
    
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
    void Duckies::setName(string name)
    {
        this->name = name; 
    }
    void Duckies::setBreed(string typOfDuck)
    {
        this->typOfDuck = typOfDuck;
    }
    void Duckies::setHat(string hatType)
    {
        this->hatType = hatType;
    }
    void Duckies::setAge(int Age)
    {
        this->age = age;
    }
    void Duckies::setShopTime(int shopTime)
    {
        this->shopTime = shopTime;
    }

    //getters
    string Duckies::getName() const
    {
        return this->name;
    }
    string Duckies::getBreed() const
    {
        return this->typOfDuck;
    }
    string Duckies::getHat() const 
    {
        return this->hatType;
    }
    int Duckies::getAge() const
    {
        return this->age;
    }
    int Duckies::getShopTime() const
    {
        return this->shopTime;
    }


//destructor
Duckies::~Duckies()
{
    delete Duckies; 
}

//print duck info
//will print information on a particular costumer(duck) 
void printDuck(Duckies* thisShop) //pointer to duck array
{
    int i;
    cout << setw(15) << left << "Customer Name:" << right <<  thisShop[i].name <<endl;
    cout << setw(15) << left << "Customer Breed:" << right <<  thisShop[i].typOfDuck <<endl;
    cout << setw(15) << left << "Customer Age:" << right << thisShop[i].age << endl;
    cout << setw(15) << left << "Customer Hat:" << right << thisShop[i].hatType << endl; 
}


};
#endif