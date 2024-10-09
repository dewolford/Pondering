/**********************************************************
 * Name:    duckclass.cpp
 * Purpose: hold class and functions for object duckies
 **********************************************************/

#include "duckclass.h"

//print duck info
//will print information on a particular costumer(duck) 

 //setters
    void setName(string name)
    {
        this->name = name; 
    }
    void setBreed(string typOfDuck)
    {
        this->typOfDuck = typOfDuck;
    }
    void setHat(string hatType)
    {
        this->hatType = hatType;
    }
    void setAge(int Age)
    {
        this->age = age;
    }
    void setShopTime(int shopTime)
    {
        this->shopTime = shopTime;
    }



//getters
    string getName() const
    {
        return this->name;
    }
    string getBreed() const
    {
        return this->typOfDuck;
    }
    string getHat() const 
    {
        return this->hatType;
    }
    int getAge() const
    {
        return this->age;
    }
    int getShopTime() const
    {
        return this->shopTime;
    }
