/*Write the program check given number is even or odd using to switch */
#include<iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter the numbers\n";
    cin>>no;
    switch(no%2)
    {
    case 0:
        cout<<no<<" is even";
        break;
    case 1:
        cout<<no<<"is odd";
    }
    return 0;
}
