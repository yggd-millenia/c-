/*Oyawoye Emmanuel , progrogramming fundamentals section 2 , visual studio code 
This code is aimed at being able to receive input of any number of pennies a user has and processing that amount into monetary units.
I.e dollars, quarters ,dimes, nickels and pennies.
*/
#include <iostream>
using namespace std;
int main()

{
    //declare variable
int dollar_amt;
int dollar_rem;

int input;

//accept input
cout << "Please,enter the number of pennies you would like to convert : "; 
cin >> input;

//process input
dollar_amt = input/100;
dollar_rem = input%100;

//Process the amount of quarters in the input
int quarter_amt = dollar_rem/25;
int quarter_rem = dollar_rem%25;

//Process the amount of dimes in the input
int dime_amt = quarter_rem/10;
int dime_rem = quarter_rem%10;

//Process the amount of nickels in the input
int nickel_amt = dime_rem/5;
int nickel_rem = dime_rem%5;

//Process the amount of pennies in the input
int pennies_amt = nickel_rem/1;
int pennies_rem = nickel_rem%1;

//display output
cout << "The dollar amount is = " << dollar_amt <<endl;
cout << "You have " << dollar_rem << " pennies left" <<"\n\n";

cout << "The quarter amount is = " << quarter_amt <<endl;
cout << "You have " << quarter_rem << " pennies left" <<"\n\n";

cout << "The dime amount is = " << dime_amt <<endl;
cout << "You have " << dime_rem << " pennies left" <<"\n\n";

cout << "The nickel amount is = " << nickel_amt <<endl;
cout << "You have " << nickel_rem << " pennies left" <<"\n\n";

cout << "The penny amount is = " << pennies_amt <<endl;
cout << "You have " << pennies_rem << " pennies left" <<"\n\n";

return 0;

}