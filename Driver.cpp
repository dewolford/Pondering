/***********************************************************
*      Name: Driver.cpp                                    *
*    Purpose: The main executable program for Pondering  
************************************************************/

#include "Chain.h"
#include "Shop.h"
#include "duckClass.h"

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

void addShop(Chain*, Shop*, Duckies*);
void getCustomers(Chain*, Shop*);
bool inputValidation(int, int, int);

int main()
{
    //variables
    int choice; 
    Chain* arrOfShops = new Chain;
    Shop* arrOfDucks = new Shop; 
    Duckies* duck = new Duckies;
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

        //validate input
        if(inputValidation(choice, 5, 1) == true)
        {
            void displayShop(Shop* shopFunctions); //calls the display shop function             
        }
        else
        {
            cout << "You entered an invalid option. Try again.";
            cin >> choice;
        }
        
        //switch case to open menu for each user choice entered
        switch(choice) 
        {
            //add shop
            case 1:
                addShop(arrOfShops, arrOfDucks, duck);
                break;

            //tear down shop
            case 2:
                destroyShop(arrOfShops);
                break;

            //display customers in shop
            case 3:
                getCustomers(arrOfShops, arrOfDucks, duck);
                break;

            //see avg shopping time
            case 4:
                getShop(arrOfShops);
                break; 
        }
    
    } while(choice !=5);
    cout << "Thank you for using Pondering's CEO Portal!\nSee you again tommorrow boss!";
    return 0;
}


//function to allow user to create shop and enter in shop information -- called 
void addShop(Chain* arrayOfShops, Shop* arrayofDucks, Duckies* duck)
{
    //variables
    string nameShop, location, nameDuck, dBreed, hat;
    int ducksInStore, currentShops, dAge, shopTime;

    //user inputs
    cout << "How many Shops do you currrently own?(excluding shop that you are currently creating)";
    cin >> currentShops;

    //validate input
    if(inputValidation(currentShops, 10, 0) == true)
    {
        void displayShop(Shop* shopFunctions); //calls the display shop function             
    }
    else
    {
        cout << "You entered an invalid option. Try again.";
        cin >> currentShops;
    }

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
            arrayofDucks->setDuckfunctions(duck, x, nameDuck, dBreed, hat, dAge, shopTime);

        }
    }
    


    //add the new shop into the array
}

void getCustomers(Chain* shopsArray, Shop* ducksArray, Duckies* duck) // display ducks 
{
    int element, tempShop, numDucks, tempAge, tempST;
    string tempName, tempHat, tempBreed; 

    //do while loop that runs only when user doesn't want to go back to the main menu
    do 
    {
        cout << "\nWhat shop do you want to display the current customers?" << endl;
        cout << "\nEnter 11 to return to main menu or 12 to add duck" << endl; 
        cin >> element; //user pick action

        //validate input
        if(inputValidation(element, 12, 1) == true)
        {
            void displayShop(Shop* shopFunctions); //calls the display shop function             
        }
        else
        {
            cout << "You entered an invalid option. Try again.";
            cin >> element;
        }

        while(element <= 0 && element > 12) //user input validation statement to not allow them to enter in an invalid number
        {
            cout << "Number entered is invalid. Please enter in a number that matches one of the given options." << endl;
        }

        if(element == 12) //adding a duck
        {
            cout << "what shop would you like to add a duck to?";
            cin >> tempShop;
            cout << "How many Ducks are currently in shop " << shopsArray[tempShop-1].getNameChain(ducksArray, tempShop-1) << "?";
            cin >> numDucks;
            cout << "What is your ducks name?";
            getline(cin, tempName);
            cout << "What is " << tempName << " breed? ";
            getline(cin, tempBreed);
            cout << "What is " << tempName << " favorite hat? ";
            getline(cin, tempHat);
            cout << "What is " << tempName << " age? ";
            cin >> tempAge;
            cout << "How long will it take them to shop? ";
            cin >> tempST;

             ducksArray->setDuckfunctions(duck, tempShop, tempName, tempBreed, tempHat, tempAge, tempST);

        }
        
        else if ((element < 11) && (element > 0))
        {
            //display duckss
            int numDucks = shopsArray[element - 1].getNumDuckChain(ducksArray, element);
            cout << "\n\nThe number of ducks in the shop right now is " << numDucks;
            for(int x = 0; x < numDucks; x++)
            {
                ducksArray[element - 1].displayDuck(duck, element);
            }
        }
        
    }while(element != 11);
    return; 
}

//display attributes of shop and average time 
Chain shopStatus(Chain* array) 
{   
    int element; //lets user pick what shop they want to see data from

    do
    {
        cout << "\nWhat shop would you like to access?\nTo return to menu enter 11 or enter 12 to add a shop:";
        cin >> element; //allows user to choose what they want to access 

        //input validation
        if(inputValidation(element, 12, 1) == true)
        {
            void displayShop(Shop* shopFunctions); //calls the display shop function             
        }
        else
        {
            cout << "You entered an invalid option. Try again.";
            cin >> element;
        }
        
        void displayShop(Shop* shopFunctions); //calls the display shop function 


    }while(element != 11);
    
}

//deletes dynamically allocated memory in the Chain class -- called in menu to allow user to destroy shops
void destroyShop(Chain* array) 
{
    //delete the ducks in the shop and then the actual shop
    for(int i = 0; i <= 0; i++)
    {
        /*for (int j = 0; j <= 0; j++)
        {
            delete [] array [i][j];
        }*/
        delete [] array [i];
    }
    
    delete[] array;
    array = NULL;
}


bool inputValidation(int input, int high, int low)
{
    if((input > high) || (input < low))
    {
        return false; 
    }
    else
        return true;
}