/**********************************************************
 * Name:    duckclass.cpp
 * Purpose: hold class and functions for object duckies
 **********************************************************/

#include "duckclass.h"

//print duck info
//will print information on a particular costumer(duck) 

void printDuck(Duckies* thisShop, int i) //pointer to duck array
{

    cout << setw(15) << left << "Customer Name:" << right <<  thisShop[i].getName() <<endl;
    cout << setw(15) << left << "Customer Breed:" << right <<  thisShop[i].getBreed() <<endl;
    cout << setw(15) << left << "Customer Age:" << right << thisShop[i].getAge() << endl;
    cout << setw(15) << left << "Customer Hat:" << right << thisShop[i].getHat()<< endl; 
    cout << setw(15) << left << "Customer Shop Time:" << right << thisShop[i].getShopTime() << endl; 
}