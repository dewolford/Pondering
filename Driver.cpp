/********************
* Name: Driver.cpp
* Purpose: The 
 */

#include "Chain.h"
#include "Shop.h"
#include "duckClass.h"

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
    int choice; 


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