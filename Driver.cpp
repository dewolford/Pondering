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
void getCustomers(Chain*, Shop*);


int main()
{
    //variables
    int choice; 
    Chain* arrOfShops = new Chain;
    Shop* arrOfDucks = new Shop; 
    int numShops = 0, numDucks, ageOfD, shopTime;
    string shopName, shopLocation, duckName, typeDuck, hatType;

    //ask user how many shops they want to start with
    cout << "\n\nStarting Up Portal For Pondering......\nPlease Start By Making Stores:";
    cout << "\n\nEnter in the number of shops you would like to start with (max of 10): " << endl;
    cin >> numShops; //user entry for number of shops they want

    //user input validation loop to prevent user from entering an invalid number of shops
    while(numShops >=11 && numShops <= 0)
    {
        cout << "You are only allowed at most 10 shops, please enter a number in that range.\n" << endl;
    }

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
            
        arrOfShops = new Chain(i, shopName, shopLocation, numDucks, MAX_ARRAY); //dynamically allocated array for Chain class

        //for loop to enter in user data about ducks until each duck has information 
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

            arrOfDucks = new Shop(j, duckName, typeDuck, hatType, ageOfD, shopTime); //dynamically allocated array for Shop class
        }
    }

    cout << "Setup Completed......\nBOOTING UP......\n\n";
   
    //do while loop to open the menu for the user and allows them to add/destroy shops and view shop information
    do
    {
        cout << "\n********** PONDERING CEO PORTAL *********" << endl;
        cout << "\nPlease choose from the following:" << endl;
        cout << "\n1) Add a shop\n2) Tear down a shop\n3) Display Customers in a Shop" << endl;
        cout << "\n4) See Average Shopping Time\n5) Exit Portal";
        
        cin >> choice;
        
        //switch case to open menu for each user choice entered
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
                getCustomers(arrOfShops, arrOfDucks);
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


//function to allow user to create shop and enter in shop information -- called 
Chain addShop(Chain* arrayOfShops, Shop* arrayofDucks)
{
    //variables
    string nameShop, location, nameDuck, dBreed, hat;
    int ducksInStore, currentShops, dAge, shopTime;

    //user inputs
    cout << "How many Shops do you currrently own?(excluding shop that you are currently creating)";
    cin >> currentShops;

    //validation loop to prevent user from entering more than allowed number of shops
    while(currentShops >= 11 || currentShops <1) 
    { 
        cout << "\nImpossible Try Again!";
    }

    //tells user that they have the max number of shops created
    if(currentShops == 10) 
    {
        cout << "\nYou have Reached Your Max Capacity of Shops You as CEO Can Handle!!! DESTROY a Shop to make a new one!";
        return; 
    }
    else //runs when the user can add more shops
    {
        cout << "\n\nWelcome to the add shop function!\n\nWhat is the name of the shop you would like to add?\n";
        getline(cin, nameShop);
        cout << "\n\nGreat! Where is this shop located?\n";
        getline(cin, location);
        cout << "\n\nAwesome!! Now last question:\nHow many ducks are shopping at opening? (max of 10)\n";
        cin >> ducksInStore; 
        arrayOfShops[currentShops +1].setNameChain(arrayofDucks, nameShop, currentShops+1);
        arrayOfShops[currentShops +1].setLocationChain(arrayofDucks, location, currentShops+1);
        arrayOfShops[currentShops +1].setNumDuckChain(arrayofDucks, ducksInStore, currentShops+1);

            cout << "What ducks are currently shopping?\nPlease enter the information accordingly below" ;
            cout << "***********************************" << endl;
        for(int x =0; x < ducksInStore; x++ )//allows user to enter in information about the ducks in the store
        {
            cout << "*******DUCK " << x+1 << "*******";
            cout << "What is their name?"; 
            getline(cin, nameDuck); 
            cout << "What is their breed?";
            getline(cin, dBreed); 
            cout << "What is " << nameDuck << "favorite hat?";
            getline(cin, hat);
            cout << "How old is " << nameDuck << "?";
            cin >> dAge;
            cout << "How long does it take them to shop?";
            cin >> shopTime;
            //arrayofDucks
        }
    }
    


    //add the new shop into the array
}

void getCustomers(Chain* shopsArray, Shop* ducksArray) // display ducks 
{
    int element; 

    do //do while loop that runs only when user doesn't want to go back to the main menu
    {
        cout << "\nWhat shop do you want to display the current customers?" << endl;
        cout << "\nEnter 11 to return to main menu or 12 to add duck" << endl; 
        cin >> element; //user pick action

        while(element <= 0 && element > 12) //user input validation statement to not allow them to enter in an invalid number
        {
            cout << "Number entered is invalid. Please enter in a number that matches one of the given options." << endl;
        }

        if(element == 12)
        {

            //add duck function

        }
        
        else if ((element < 11) && (element > 0))
        {
            //display duckss
            int numDucks = shopsArray[element - 1].getNumDuckChain(ducksArray, element);
            cout << "\n\nThe number of ducks in the shop right now is " << numDucks;
            for(int x = 0; x < numDucks; x++)
            {
                ducksArray[element - 1].displayDuck(ducksArray, element);
            }
        }
        
    }while(element != 11);
}

//display attributes of shop and average time 
Chain shopStatus(Chain* array) 
{   
    int element; //lets user pick what shop they want to see data from

    do
    {
        cout << "\nWhat shop would you like to access?\nTo return to menu enter 11 or enter 12 to add a shop:";
        cin >> element; //allows user to choose what they want to access 
        
        void displayShop(Shop* shopFunctions); //calls the display shop function 


    }while(element != 11);
    
}

//deletes dynamically allocated memory in the Chain class -- called in menu to allow user to destroy shops
void destroyShop(Chain* array) 
{
    //delete the ducks in the shop and then the actual shop
    for(int i = 0; i <= 0; i++)
    {
        delete [] array;
    }
    
    ~Shop();
}

