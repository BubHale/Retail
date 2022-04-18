/*
Author: Samuel Hale
Creation Purpose: To allow the user to carry out transactions and emulate certain store operations
Creation Date: 4/18/22
*/
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;
/*ADT DECLARATIONS*/
struct Item;
struct Transactions;
struct Customer;
class Store;
/*----------------*/

/*PRINT FUNCTIONS*/
void Menu(char& input);
/*---------------*/

/*AUXILIARY FUNCTIONS*/
void AddItem();
void RemoveItem();
void Pay();
/*-------------------*/

int main() {
     /*STORE CREATION*/
     Customer custOne, custTwo, custThree;
     custOne.custName = "SAMUELHALE";
     custTwo.custName = "JUSTINHOULE";
     custThree.custName = "AYDENWASSER";
     vector<Customer> tempCustVect = { custOne, custTwo, custThree };
     Item itemOne, itemTwo, itemThree;
     itemOne.itemName = "PS5";
     itemTwo.itemName = "APPLE";
     itemThree.itemName = "FOOTBALL";
     itemOne.itemAmount = 100;
     itemTwo.itemAmount = 200;
     itemThree.itemAmount = 150;
     itemOne.itemCost = 500;
     itemTwo.itemCost = 1.25;
     itemThree.itemCost = 25;
     vector<Item> tempItemVect = { itemOne, itemTwo, itemThree };
     Store Retail("WALMART", 0, tempCustVect, tempItemVect);
     /*VARIABLE DECLARATION*/
     char userInput = '5';
     /*--------------------*/
     Menu(userInput);
}

/*ADT DECLARATIONS*/
//Purpose: Represents an item at the store
struct Item {
     string itemName;
     double itemCost;
     int itemAmount;
};
//Purpose: Represents a transaction at the store
struct Transactions {
     double total;
     bool card;
     bool cash;
     vector<Item> cart;
};
struct Customer {
     string custName;
     vector<Transactions> custShopHistory;
     vector<Item> custCart;
};
class Store {
private:
     vector<Customer> storCustomers;
     double storSafe;
     string storName;
     vector<Item> storInventory;
public:
     /*CONSTRUCT/DESTRUCTORS*/
     Store(string tempName, double tempSafe, vector<Customer> tempStorCustomers, vector<Item> tempStorInventory) : storName(tempName), storSafe(tempSafe), storCustomers(tempStorCustomers), storInventory(tempStorInventory) {}
     ~Store() {}
     /*---------------------*/

     /*SET METHODS*/
     Store SetInventory(vector<Item> tempInventory) {}
     Store SetCustomers(vector<Customer> tempCustomers) {}
     Store SetSafe(double tempSafe) {}
     Store SetStoreName(string tempName) {}
     /*----------*/

     /*GET METHODS*/
     Store GetInventory() {}
     Store GetCustomers() {}
     Store GetSafe() {}
     Store GetStoreName() {}
     /*-----------*/

     /*AUXILIARY METHODS*/
     Store AddItem() {}
     Store RemoveItem() {}
     Store Pay() {}
     /*-----------------*/
};
/*----------------*/

/*PRINT FUNCTIONS*/
void Menu(char& input) {
     cout << "|---------------------------------WALMART---------------------------------|\n";
     cout << "   (1) Transactions\n";
     cout << "   (2) Print Inventory\n";
     cout << "   (3) Exit\n";
     cout << "   (Entry):";
     cin >> input;
     cout << endl;
}
/*---------------*/