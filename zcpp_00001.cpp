/** write a program that inputs a 3 digit number and displays its digits
in separate three lines. For example if the user enters 123, the program
displays the output as follows:
1
2
3
**/

#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cout<<"Enter 3 digits number"<<endl;
    cin>>n;
    a= n/100;
    n= n%100;
    b= n/10;
    c= n%10;
    cout<<"The numbers are: "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
}

/**
here the logic is:
    if we divide 123 with 100 then we will get 1 as a result,
    so here 1 is the first element assign as a "a",
    my doing module operation we get 23,
    and then divide it with 10 gives as second element as a result.
    so 2 is the second element assign as a "b"
    and lastly the modulus of 10 is 3, which is the last element, so
    this element are assigned as a "c".
    **/

