/********************
    * Name: Driver.cpp
    * Purpose: The main executable program for Pondering
 */

#include "Chain.h"
#include "Shop.h"
#include "duckClass.h"

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

Chain* addShop();

int main()
{
    int choice; 
    Chain* array = new Chain[10];

    do
    {
        cout << "\n********** PONDERING CEO PORTAL *********" << endl;
        cout << "Please choose from the following:" << endl;
        cout << "1) Add a shop\n2) Tear down a shop\n3) Display Customers in a Shop" << endl;
        cout << "4) See Average Shopping Time\n5) Exit Portal";
        
        cin >> choice;
        
        switch(choice)
        {
            //add shop
            case 1:
            addShop(array);
            break;

            //tear down shop
            case 2:
            
            break;

            //display customers in shop
            case 3:

            break;

            //see avg shopping time
            case 4:

            break; 
        }
    
    } while(choice !=5);





    return 0;
}

Chain* addShop(Chain* array)
{
    //variables
    string name, location;
    int capacity;

    //user inputs
    cout << "\n\nWelcome to the add shop function!\n\nWhat is the name of the shop you would like to add?\n";
    getline(cin, name);
    cout << "\n\nGreat! Where is this shop located?\n";
    getline(cin, location);
    cout << "\n\nAwesome!! Now last question:\nHow many ducks can fit in this store? (max of ten (10))\n";
    cin >> capacity;
    cin.ignore();

    //add the new shop into the array
}