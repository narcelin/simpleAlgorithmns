/*COP 2220  (program 4) -
//add you name, date and description here*/

#define _CRT_SECURE_NO_WARNINGS //for Visual Studio compiler
#pragma warning(disable:6031) //ignore scanf warnings

#include<stdio.h> //for printf and scanf
#include<ctype.h> //for tolower and toupper

//function prototypes

void Greeting(void){
    printf("Welcome to the new an improved Carbon Bonder 3000 where we use the same food syntisizer tech as the enterprise. Take a look at our choices below!");
};
//welcome the user to the food purchasing app

double SetPrice(int itemNumber);
//Function decloration to fix error. I would move the entire function here, but did not want to move it around too much for grading

int DisplayFoodSelections(){
    
    printf("1: Klingon Cuisine - 27 Credits \n 2: Vulcan Cuisine - 23 Credits \n 3:Bajoran Cuisine - 32 Credits \n 4: Ferengi Cuisine - 435 Credits \n 5: Betazoid Cuisine - 48 Credits 6: Cardassian Cuisine - 13 Credits 7: Romulan Cuisine - 25 Credits 8:Andorian Cuisine - 75 Credits \n 9: Bolian Cuisine - 38 Credits \n 10: Qomar Cuisine - 17 Credits \n 11: Horta Cuisine - 9 Credits \n 12: Human Cuisine - FREE \n");
    
    int userSelection;
    
    printf("Please select an item: ");
    scanf(" %d", &userSelection);
    
    return (int)SetPrice(userSelection);
};
//display the food choices, the price, and related item number
//declare, ask, get the item number
//return the price of the item

double SetPrice(int itemNumber){
    
    switch (itemNumber) {
        case 1:
            return(27);
            break;
        case 2:
            return(23);
            break;
        case 3:
            return(32);
            break;
        case 4:
            return(435);
            break;
        case 5:
            return(48);
            break;
        case 6:
            return(13);
            break;
        case 7:
            return(25);
            break;
        case 8:
            return(75);
            break;
        case 9:
            return(38);
            break;
        case 10:
            return(17);
            break;
        case 11:
            return(9);
            break;
        case 12:
            return(0); //AKA FREE
            break;
            
        default:
            return -1;
            break;
    }
};
//input: item number
//use the item number to identify the price
//return the price

double AddQuantityToOrder(double price){
    int userQuantity;
    
    printf("Your order will cost you %f Credits. How many would you like? (QTY)");
    scanf(" %d", &userQuantity);
    
    double totalPrice = userQuantity * price;
    
    printf("Your total for this item is %f", totalPrice);
    return totalPrice;
};
//input: price of the item
//declare ask and get the quantity
//calculate and return the item total
//return the total

double Checkout(double balance, double totalPrice){
    
};
//input: amount of money in the account and the order total
//return: the amount left in the account after making the purchase
//Uses the Reload and checkForEnough functions
//to get money from the user until the user has enough to make the purchase
//make the purchase and return the remaining balance


//THIS FUNCTION WILL BE CALLED FROM THE Checkout function
int CheckForEnough(double balance, double totalPrice);
//input: amount of money in the account and the order total
//returns a 1 if there is enough in the account to make a purchase
//returns 0 if there is not enough

//THIS FUNCTION WILL BE CALLED FROM THE Checkout function
double Reload(double balance);
//input: account balance
//return the new balance with the added funds
//reload the account balance


int main()
{
    //declare variables
    double balanceInMain = 20.00;
    double priceInMain = 0.0;
    double totalInMain = 0.0;
    int itemNumber;

    //greet the user - Greeting function call
    Greeting();
    
    //display the balance, at this point is should be $20.00
    printf("You have a total of %f Credits to your account", balanceInMain);
    
    //display the items for purchase - call the DisplayFoodSelections function and it will return the item number
    int userSelection = DisplayFoodSelections();
    
    //print the item number to check that the function is working as expected
    printf(" %d", userSelection);
    
    //set the price of the item - call the SetPrice function

    //print the price to check that the function is working as expected

    //get the quantity and add it to the total - call the AddQuantityToOrder function
    
    //print the total to check that the function is working as expected

    //Checkout
    //balanceInMain = Checkout(balanceInMain, totalInMain);

    //display the ending balance

    //say goodbye to the user
    printf("\nHave a great day!\n\n");
    return 0;
}


//function definitions
void Greeting(void)
//welcome the user to the food purchasing app
{
    
}


int DisplayFoodSelections()
//display the food choices, the price, and related item number
//declare, ask, get, and return the item number
{
    //int item;

    //scanf("%d", &item);
    //return item;

}

double SetPrice(int itemNumber)
//input: item number
//use the item number to identify the price
//return the price
{
    //double price = 0.0;

    //switch (itemNumber) {
    //case 1:
        //printf("\nYou selected Box Combo, the price is $11.39\n");
        //price = 11.39;
        //break;
    //add other cases
    //default:
        //printf("\nThere is no item with that number");
        //price = 0.0;
    //}
    //return price;
}

double AddQuantityToOrder(double price)
//input: price of the item
//declare ask and get the quantity
//calculate and return the item total
//return the total
{
    //declare, ask, and get the quantity
    //return price * quantity;
}

double Checkout(double balance, double totalPrice)
//input: amount of money in the account and the order total
//return: the amount left in the account after making the purchase
//Uses the Reload and checkFor Enough functions
//to get money from the user until the user has enough to make the purchase
//make the purchase and return the remaining balance
{
    //initialization
    //int enough = CheckForEnough(balance, totalPrice);
    
    //while (enough == 0)//not enough money
    {
        //display the balance and total
        //balance = Reload(balance);//RELOAD
        //enough = CheckForEnough(balance, totalPrice); //UPDATE
    }
    //subtract total from balance
    //return the new total
}

int CheckForEnough(double balance, double totalPrice)
//input: amount of money in the account and the order total
//returns a 1 if there is enough in the account to make a purchase
//returns 0 if there is not enough
{
    //use if/else here
}

double Reload(double balance)
//input: account balance
//return the new balance with the added funds
//reload the account balance
{
    //double addAmount;
    //ask and get the aamount to add
    //return balance + addAmount;

}
