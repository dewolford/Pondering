/************************
 * Name:duckclass.h
 * Purpose: hold class and functions for object duckies
 */

#include<string> 
#include<iomanip> 
#include<iostream> 
using namespace std;

#ifndef duckclass_H
#define duckclass_H


    class Duckies 
    {
        //variables
        private:
        string name, typOfDuck, hat;
        int age; 

        //functions
        //constructor
        Duckies(string a, string b, string c, int d) 
        {
            name = a;
            typOfDuck = b;
            hat = c;
            age = d; 
        }

        //destructor 

        //print duck info
        //will print information on a particular costumer(duck) 
        void printDuck(Shop* thisShop) //pointer to duck array
        {
            int i;
            cout << setw(15) << left << "Customer Name:" << right <<  thisShop[i].name <<endl;
            cout << setw(15) << left << "Customer Breed:" << right <<  thisShop[i].typOfDuck <<endl;
            cout << setw(15) << left << "Customer Age:" << right << thisShop[i].age << endl;
            cout << setw(15) << left << "Customer Hat:" << right << thisShop[i].hat << endl; 
        }

    };

#endif