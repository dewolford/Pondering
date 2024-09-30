/***********************************************************
*      Name: Driver.cpp                                    *
*    Purpose: The main executable program for Pondering    *
************************************************************/

#include "Chain.h"
#include "Shop.h"
#include "duckClass.h"

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

Chain* addShop(Chain);
void getShop(Chain*);


int main()
{
    int choice; 
    Chain* arrOfShops;
    arrOfShops = new Chain[MAX_ARRAY];

    
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
                addShop(arrOfShops);
                break;

            //tear down shop
            case 2:
                destroyShop(arrOfShops);
                break;

            //display customers in shop
            case 3:
                
                break;

            //see avg shopping time
            case 4:
                getShop();
                cout << "The average shop time for " << /*shopName*/ << " is " << Duckies avgShopTime << endl;
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

void getShop(Chain* array) // display ducks 
{
    int element; 

    do
    {
        cout << "What shop do you want to display the current customers?" << endl;
        cout << "enter 11 to return to main menu or 12 to add duck" << endl; 
        cin >> element; 
        array[element].
    }while(element != 11);
}


Chain* shopStatus(Chain* array) //display attributes of shop and average time 
{   
    int element;

    do
    {
        cout << "What shop would you like to access?\nTo return to menu enter 11 or 12 to add a shop:";
        cin >> element;
        array[element].displayShop(element);

    }while(element != 11);
    
}

void destroyShop(Shop* array)
{
    //delete the ducks in the shop and then the actual shop
    for(int i = 0; i <= 0; i++)
    {
        delete [] array;
    }
    
    ~Shop();
}

