/** program that inputs five digits integer through the keyboard and calculates the sum of its digits.
34565
this is the integer, and 3, 4, 5, 6, 5 are digit, digits makes number.
**/

#include<iostream>
using namespace std;
int main()
    {
    int number, last_digit, next_digit, total;
    cout<<"Enter the number to sum of digits:"<<endl;
    cin>>number;

    last_digit= number%10;
    total=last_digit;
    next_digit= (number/10)%10;
    total=total+next_digit;
    next_digit=(number/100)%10;
    total=total+next_digit;
    next_digit=(number/1000)%10;
    total=total+next_digit;
    next_digit=(number/10000)%10;
    total=total+next_digit;

   cout<<"The sum of digits is: "<<total<<endl;


    }

/**
34565
this is the integer, and 3, 4, 5, 6, 5 are digit, digits makes number.

**/


