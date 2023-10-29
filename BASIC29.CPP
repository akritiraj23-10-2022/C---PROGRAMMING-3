/*FIND THE GREATER VALUE IN TWO NUMBER USING SWITCH*/
#include<iostream>
using namespace std;
int main()
{
    /*variable declaration*/
    int no1,no2;
    /*taking user input*/
    cout<<"Enter no 1 and no 2:\n";
    cin>>no1>>no2;
    /*conditional operators returns either 0 or 1*/
    switch(no1>no2)
    {
        /*if condition (no 1 or no 2) is false*/
    case 0:
        cout<<no2<<"is maximum";
        break;
        /*if condition (no 1>no 2)is true*/
    case 1:
        cout<<no1<<"is maximum";
    }
}
