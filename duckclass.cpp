/**********************************************************
 * Name:    duckclass.cpp
 * Purpose: hold class and functions for object duckies
 **********************************************************/

#include "duckclass.h"

//constructors
Duckies::Duckies()
{

}

Duckies::Duckies(string a, string b, string c, int d) //overloaded
{
    name = a;
    typOfDuck = b;
    hat = c;
    age = d; 
}

//destructor
Duckies::~Duckies()
{

}

//print duck info
//will print information on a particular costumer(duck) 
void::printDuck(Shop* thisShop) //pointer to duck array
{
    int i;
    cout << setw(15) << left << "Customer Name:" << right <<  thisShop[i].name <<endl;
    cout << setw(15) << left << "Customer Breed:" << right <<  thisShop[i].typOfDuck <<endl;
    cout << setw(15) << left << "Customer Age:" << right << thisShop[i].age << endl;
    cout << setw(15) << left << "Customer Hat:" << right << thisShop[i].hat << endl; 
}
