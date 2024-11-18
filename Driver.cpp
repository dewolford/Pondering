/***********************************************************
*      Name: Driver.cpp                                    *
*    Purpose: The main executable program for Pondering  
************************************************************/
#include "Shop.h"
#include "Chain.h"
#include "duckClass.h"

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

void addShop(Chain*, Shop*, Duckies*);
void getCustomers(Chain*, Shop*, Duckies*);
void destroyShop(Chain*, Shop*, Duckies*); 
void displayShop(Chain*);

int main()
{
    //variables
    int choice; 
    Chain* arrOfShops = new Chain;
    Shop* arrOfDucks = new Shop; 
    Duckies* duck = new Duckies;
    int numShops = 0, numDucks, ageOfD, shopTime;
    string shopName, shopLocation, duckName, typeDuck, hatType;
    ifstream test; 
    string temp; 

    test.open("test.txt");

    //ask user how many shops they want to start with
    cout << "\n\nStarting Up Portal For Pondering......\nPlease Start By Making Stores:";
    cout << "\n\nEnter in the number of shops you would like to start with (max of 10): " << endl;
    getline(test, temp, '#');
    numShops = stoi(temp);  //user entry for number of shops they want

    //user input validation loop to prevent user from entering an invalid number of shops
    while(numShops >=11 && numShops <= 0)
    {
        cout << "You are only allowed at most 10 shops, please enter a number in that range.\n" << endl;
            getline(test, temp, '#');
            numShops = stoi(temp);
    }


    //for loop to enter in data for num of shops
    for(int i = 0; i < numShops; i++)
    {
        cout << "\nShop name: " << endl;
        getline(test, shopName, '#');


        cout << "\nShop Location: " << endl;
        getline(test, shopLocation, '#');
        
        cout << "\nHow many ducks are quacka-a-laking in the shop?" << endl;
        getline(test, temp, '#');
        numDucks = stoi(temp);

        cout << "\nPardon me sire, enter in the information for each ducky." << endl;
            
        arrOfShops = new Chain(i, shopLocation, shopName, numDucks); //dynamically allocated array for Chain class

        //for loop to enter in user data about ducks until each duck has information 
        for(int j = 0; j < numDucks; j++)
        {
            cout << "\n\nEnter in infromation for duck " << j + 1 << " thanks." << endl;
            
            cout << "\nDuck name: " << endl;
            getline(test,duckName, '#');
        
            cout << "Type/Breed of Duck: " << endl;
            getline(test, typeDuck, '#');

            cout << "Ducks favorite hat: " << endl; 
            getline(test, hatType, '#');

            cout << "How old is the duck: " << endl; 
            getline(test, temp, '#');
            ageOfD = stoi(temp);

            cout << "How long does it take them to shop: " << endl;
            getline(test, temp, '#');
            shopTime = stoi(temp);

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
        
            getline(test, temp, '#');
            choice = stoi(temp);

        //validate input
        while(choice > 5 || choice < 1)
        {
            cout << "\nPlease choose a number within the options given";

            getline(test, temp, '#');
            choice = stoi(temp);
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
                destroyShop(arrOfShops, arrOfDucks, duck);
                break;

            //display customers in shop
            case 3:
                getCustomers(arrOfShops, arrOfDucks, duck);
                break;

            //see avg shopping time
            case 4:
                displayShop(arrOfShops);
                break; 
        }
    
    } while(choice !=5);
    cout << "Thank you for using Pondering's CEO Portal!\nSee you again tommorrow boss!";
    return 0;
}


/*
    Function Name: addShop
    Purpose: function to allow user to create shop and enter in shop information
    Return: void
*/
void addShop(Chain* arrayOfShops, Shop* arrayofDucks, Duckies* duck)
{
    //variables
    string nameShop, location, nameDuck, dBreed, hat, temp;
    int ducksInStore, currentShops, dAge, shopTime;
    ifstream test; 

    test.open("test.txt");
    //user inputs
    cout << "How many Shops do you currrently own?(excluding shop that you are currently creating)";
    getline(test, temp, '#');
    currentShops = stoi(temp);


    //validation loop to prevent user from entering more than allowed number of shops
    while(currentShops >= 11 || currentShops <1) 
    { 
        cout << "\nImpossible Try Again!";
        getline(test, temp, '#');
        currentShops = stoi(temp);
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
        getline(test, nameShop, '#');
        cout << "\n\nGreat! Where is this shop located?\n";
        getline(test, location, '#');
        cout << "\n\nAwesome!! Now last question:\nHow many ducks are shopping at opening? (max of 10)\n";
        getline(test, temp, '#');
        ducksInStore = stoi(temp);
        arrayOfShops[currentShops +1].setShopFunctions(arrayofDucks, currentShops+1, nameShop, location, ducksInStore); 

            cout << "What ducks are currently shopping?\nPlease enter the information accordingly below" ;
            cout << "***********************************" << endl;
        for(int x =0; x < ducksInStore; x++ )//allows user to enter in information about the ducks in the store
        {
            cout << "*******DUCK " << x+1 << "*******";
            cout << "What is their name?"; 
            getline(test, nameDuck, '#'); 
            cout << "What is their breed?";
            getline(test, dBreed, '#'); 
            cout << "What is " << nameDuck << "favorite hat?";
            getline(test, hat, '#');
            cout << "How old is " << nameDuck << "?";
            getline(test, temp, '#');
            dAge = stoi(temp);
            cout << "How long does it take them to shop?";
            getline(test, temp, '#');
            shopTime = stoi(temp);
            arrayofDucks->setDuckfunctions(duck, x, nameDuck, dBreed, hat, dAge, shopTime);

        }
    }

    test.close();

    //add the new shop into the array
}


/*
    Function Name: getCustomers
    Purpose: display current customers in a shop
    Return: void
*/
void getCustomers(Chain* shopsArray, Shop* ducksArray, Duckies* duck) // display ducks 
{
    int element, tempShop, numDucks, tempAge, tempST;
    string tempName, tempHat, tempBreed, temp; 
    ifstream test;

    test.open("test.txt");

    //do while loop that runs only when user doesn't want to go back to the main menu
    do 
    {
        cout << "\nWhat shop do you want to display the current customers?" << endl;
        cout << "\nEnter 11 to return to main menu or 12 to add duck" << endl; 
        //user pick action
        getline(test, temp, '#');
        element = stoi(temp);

        //validate input
        while(element >= 13 || element <=0 )
        {
            cout << "INVALID CHOICE! Please enter in a number 1-12" << endl; 
            getline(test, temp, '#');
            element = stoi(temp);
        }


        if(element == 12) //adding a duck
        {
            cout << "what shop would you like to add a duck to?";
            getline(test, temp, '#');
            tempShop = stoi(temp);
            cout << "How many Ducks are currently in shop " << shopsArray[tempShop-1].getShopName(ducksArray, element) << "?";
            getline(test, temp, '#');
            numDucks = stoi(temp);
            while(numDucks >= 10 || numDucks < 0)
            {   
                cout << "INVALID CHOICE";
                getline(test, temp, '#');
                numDucks = stoi(temp);
            }
            cout << "What is your ducks name?";
            getline(test, tempName, '#');
            cout << "What is " << tempName << " breed? ";
            getline(test, tempBreed, '#');
            cout << "What is " << tempName << " favorite hat? ";
            getline(test, tempHat, '#');
            cout << "What is " << tempName << " age? ";
            getline(test, temp, '#');
            tempAge = stoi(temp);
            cout << "How long will it take them to shop? ";
            getline(test, temp, '#');
            tempST = stoi(temp);

             ducksArray->setDuckfunctions(duck, tempShop, tempName, tempBreed, tempHat, tempAge, tempST);

        }
        
        else if ((element < 11) && (element > 0))
        {
            //display duckss
            int numDucks = shopsArray[element - 1].getNumOfDucks(ducksArray, element);
            cout << "\n\nThe number of ducks in the shop right now is " << numDucks;
            for(int x = 0; x < numDucks; x++)
            {
                shopsArray[element-1].displayDuck(duck, x, numDucks, ducksArray, element-1);
            }
        }
        
    }while(element != 11);
    return; 

    test.close();
}


/*
    Function Name: shopStatus
    Purpose: display attributes of shop and average time
    Return: void
*/
void shopStatus(Chain* array) 
{   
    ifstream test;
    string temp;
    int element; //lets user pick what shop they want to see data from

    test.open("test.txt");
    do
    {
        cout << "\nWhat shop would you like to access?\nTo return to menu enter 11 or enter 12 to add a shop:";
        getline(test, temp, '#');
        element = stoi(temp); //allows user to choose what they want to access 

        //input validation
        while(element >= 12 || element < 1 ) 
    { 
        cout << "\nPlease choose a number that matches an option we gave you.";
        cin >> element;
    }
        
    void displayShop(Shop* shopFunctions); //calls the display shop function 


    }while(element != 11);
    
    test.close();
}


/*
    Function Name: destroyShop
    Purpose: deletes dynamically allocated memory in the Chain class
    Return: void
*/
void destroyShop(Chain* arrOfShops, Shop* arrOfDucks, Duckies* duck) 
{
     //deletes the duck in the array
    delete[] duck;
    duck = NULL;    
    
    //deletes the array of ducks 
    delete[] arrOfDucks;
    arrOfDucks = NULL;

    //deletes the array
    delete[] arrOfShops;
    arrOfShops = NULL;
}
