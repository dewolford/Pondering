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
        Duckies duckFunctions[MAX_ARRAY];      

    public:
        //overloaded Shop constructor
        Shop(string , string , int , int )
        {
            //setters
            void setLocation(string);
            void setShopName(string);
            void setDuckNum(int);      
        }
//constructor
Shop()
{
    this->shopName = " ";
    this->location = " ";
    this->capacity = 0;
    this->numOfDucks = 0;
    for(int x = 0; x < MAX_ARRAY; x++)
    {
        duckFunctions[x].setName(" ");
        duckFunctions[x].setBreed(" ");
        duckFunctions[x].setHat(" ");
        duckFunctions[x].setAge(0);
        duckFunctions[x].setShopTime(0);
    }
}

//overloaded constructor
Shop(int i, string name, string breed, string hat, int age, int time)
{

    duckFunctions[i].setName(name);
    duckFunctions[i].setBreed(breed);
    duckFunctions[i].setHat(hat);
    duckFunctions[i].setAge(age);
    duckFunctions[i].setShopTime(time);
    
}
//destructor
Shop::~Shop()
{
    delete [] ducksInShop; 
    delete ducksInShop;

    delete Shop;

    cout << "\n\nThe shop has been torn down.";
}

//setters
void Shop::setShopName(string shopName);
void Shop::settLocation(string getLocation);
void Shop::setCapacity(int capacity);
void Shop::setNumOfDucks(int numOfDucks);

//getters
string Shop::getShopName() const;
string Shop::getLocation() const;
int Shop:: getCapacity() const;
int Shop:: getNumOfDucks() const;

void displayDuck(Duckies* thisShop, int i);

};



#endif
