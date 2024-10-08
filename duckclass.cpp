/**********************************************************
 * Name:    duckclass.cpp
 * Purpose: hold class and functions for object duckies
 **********************************************************/

#include "duckclass.h"

//print duck info
//will print information on a particular costumer(duck) 

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
