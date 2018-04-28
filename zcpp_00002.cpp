/** program to swap the values of three variables without using fourth variable.
**/

#include<iostream>
using namespace std;
int main()
{
    int x, y,z;
    cout<<"Enter 3 numbers:"<<endl;
    cin>>x>>y>>z;
    cout<<"Values entered: "<<endl;
    cout<<" x = " <<x<<" y = "<<y<<" z = "<<z<<endl;

    x= x+y+z;
    y= x-(y+z);
    z= x-(y+z);
    x= x-(y+z);


    cout<<"New Values: "<<endl;
    cout<<" x = " <<x<<" y = "<<y<<" z = "<<z<<endl;
}

/**
here the logic is:
    we will swap x value to y,
    z value to x,
    y value to z.
    **/


