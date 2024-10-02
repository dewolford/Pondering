/***********************************************************
*      Name: Driver.cpp                                    *
*    Purpose: The main executable program for Pondering  


int numIceCreams;
    string cone, flavor, topping;
    double price;
    IceCream** iceCreamArray;

    cout << "How many Ice Creams would you like?  ";
    cin >> numIceCreams;
    cin.ignore();

    iceCreamArray = new IceCream*[numIceCreams];

    for(int i = 0; i < numIceCreams; i++)
    {
        //gets data from the user
        cout << "\nEnter data for Ice Cream " << i + 1 << ": ";

        cout << "\nType of cone? \t";
        getline(cin, cone);
        cout << "What flavor? \t";
        getline(cin, flavor);
        cout << "What topping? \t";
        getline(cin, topping);
        cout << "Price\t\t$ ";
        cin >> price;
        cin.ignore();
        
        //creates IceCream object and put address in the array
        iceCreamArray[i] = new IceCream(cone, flavor, topping, price);

    }
 
************************************************************/

#include "Chain.h"
#include "Shop.h"
#include "duckClass.h"

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

Chain addShop(Chain);
void getShop(Chain);


int main()
{
    int choice; 
    Chain* arrOfShops = new Chain;
    Shop* arrOfDucks = new Shop; 
    int numShops = 0, numDucks, ageOfD, shopTime;
    string shopName, shopLocation, duckName, typeDuck, hatType;

    //aks user how many shops they want to start with
    cout << "\n\nStarting Up Portal For Pondering......\nPlease Start By Making Started Stores:";
    cout << "\n\nEnter in the number of shops you would like to start with: " << endl;
    cin >> numShops;

    cin.ignore(); 

    //for loop to enter in data for num of shops
    for(int i = 0; i < numShops; i++)
    {
        cout << "\nShop name: " << endl;
        getline(cin, shopName);

        cout << "\nShop Location: " << endl;
        getline(cin, shopLocation);
        
        cout << "\nHow many ducks are quacka-a-laking in the shop?" << endl;
        cin >> numDucks;

        cout << "\nPardon me sire, enter in the information for each ducky." << endl;
            
        arrOfShops = new Chain(i, shopName, shopLocation, numDucks, MAX_ARRAY);

        for(int j = 0; j < numDucks; j++)
        {
            cout << "\n\nEnter in infromation for duck " << j + 1 << " thanks." << endl;
            
            cout << "\nDuck name: " << endl;
            getline(cin,duckName);

            cout << "Type/Breed of Duck: " << endl;
            getline(cin, typeDuck);

            cout << "Ducks favorite hat: " << endl; 
            getline(cin, hatType);

            cout << "How old is the duck: " << endl; 
            cin >> ageOfD;

            cout << "How long does it take them to shop: " << endl;
            cin >> shopTime; 

            arrOfDucks = new Shop(j, duckName, typeDuck, hatType, ageOfD, shopTime);
        }
    }

    cout << "Setup Completed......\nBOOTING UP......\n\n";
   
    
    do
    {
        cout << "\n********** PONDERING CEO PORTAL *********" << endl;
        cout << "\nPlease choose from the following:" << endl;
        cout << "\n1) Add a shop\n2) Tear down a shop\n3) Display Customers in a Shop" << endl;
        cout << "\n4) See Average Shopping Time\n5) Exit Portal";
        
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
                getShop(arrOfShops);
                cout << "\nThe average shop time for " << /*shopName << */ " is " << Duckies avgShopTime << endl;
                break; 
        }
    
    } while(choice !=5);

    return 0;
}

Chain addShop(Chain* arrayofShops, Shop* arrayofDucks)
{
    //variables
    string name, location;
    int ducksInStore, currentShops;

    //user inputs
    cout << "How many Shops do you currrently own?(excluding shop that you are currently creating)";
    cin >> currentShops;
    while(currentShops >= 11 || currentShops <1) 
    {
        cout << "\nImpossible Try Again!";
    }
    if(currentShops == 10)
    {
        cout << "\nYou have Reached Your Max Capacity of Shops You as CEO Can Handle!!! DESTROY a Shop to make a new one!";
        return; 
    }
    else
    {
        cout << "\n\nWelcome to the add shop function!\n\nWhat is the name of the shop you would like to add?\n";
        getline(cin, name);
        cout << "\n\nGreat! Where is this shop located?\n";
        getline(cin, location);
        cout << "\n\nAwesome!! Now last question:\nHow many ducks are shopping at opening? (max of 10)\n";
        cin >> ducksInStore; 
        arrayofShops[currentShops +1].setNameChain(arrayofDucks, name, currentShops+1);
        for(int  )
    }
    


    //add the new shop into the array
}

void getShop(Chain* array) // display ducks 
{
    int element; 

    do
    {
        cout << "\nWhat shop do you want to display the current customers?" << endl;
        cout << "\nEnter 11 to return to main menu or 12 to add duck" << endl; 
        cin >> element; 
        array[element];
        
    }while(element != 11);
}


Chain shopStatus(Chain* array) //display attributes of shop and average time 
{   
    int element; //lets user pick what shop they want to see data from

    do
    {
        cout << "\nWhat shop would you like to access?\nTo return to menu enter 11 or enter 12 to add a shop:";
        cin >> element;
        
        void displayShop(Shop* shopFunctions);


    }while(element != 11);
    
}

void destroyShop(Chain* array)
{
    //delete the ducks in the shop and then the actual shop
    for(int i = 0; i <= 0; i++)
    {
        delete [] array;
    }
    
    ~Shop();
}

