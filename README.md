# Pondering
******* Pondering- Exquisite Artisan Hats ******
A menu based program to control Pondering's (A chain store of Artisian Duck Hats) day to day operations. The CEO (user) of Pondering will be able to build and destroy shops to manage the chain. They will also be able to check on individual shops and their details. They will be able to look into the customers in the stores as well.

This program should 
Driver
- Be a while loop that allows user to add shops, destroy shops, display the current customers in a selected shop, access average time in shops, and exit the program. (menu based)

A class for:
1) Shop chains
   -must be able to read from a file
  Variables
  - Pointer to an array of shops
  Functions 
  - private variable setters
  - private variable getters
  - contains a constructor and destructor
  - build shop
  - destroy shop
  - get shop
  - shop status

2) Single shops
  Variables
  - Pointer to an array of ducks(customers)
  - pointer to an array of ints(when the ducks arrived at the store)
  - string shop name
  - int shop capacity
  - int current amount of customers
  - where is the shop
  Functions
  - private variable setters
  - private variable getters
  - constructor
  - destructor
  - shop
  - checkout (returns the time spent shopping)

3) Ducks(customers)
  Variables
  - String Name
  - String type of duck (breed)
  - String hat
  - int age
  Functions
  - private variable setters
  - private variable getters
  - Constructor
  - Destructor
  - get data for the duck
