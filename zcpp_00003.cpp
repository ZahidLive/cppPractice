/** program to enter a letter and display the next two letters.
**/

#include<iostream>
using namespace std;
int main()
{
    char character;
    cout<<"Enter your letter:"<<endl;
    cin>>character;
    cout<<"The next two letters are:"<<endl;
    cout<<(char)(character+1)<<endl;
    cout<<(char)(character+2)<<endl;
}

/**
here we know that every character has a own ascii code, so incrementing from the root makes the code to the following.
if you write z then it will show symbol, not character as there are no character after z lol
    **/


