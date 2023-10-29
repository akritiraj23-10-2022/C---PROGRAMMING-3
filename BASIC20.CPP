/*WRITE THE PROGRAMMING CONVERT DECIMAL TO BINARY NUMBER*/
#include<iostream>
using namespace std;
int main()
{
    /*variable declaration*/
    long decimal, temp ,binary;
    int rem,place=1;
    binary = 0;
    /*taking user input*/
    cout<<"Enter the any decimal numbers:\n";
    cin>>decimal;
    /*passing decimal to temp variable*/
    temp =decimal;
    /*Decimal to temp variable*/
    while(temp > 0)
    {
        rem = temp% 2;
        binary =(rem * place)+ binary;
        temp = temp/ 2;
        place = place*10;
    }
    cout<<"Decimal number:"<<decimal<< endl;
    cout<<"Binary number:"<< binary<<endl;
}
