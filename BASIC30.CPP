/*write the program find the perimeter of a rectangle*/
#include<iostream>
using namespace std;
int main()
{
    /*variable declaration*/
    int height, width,perimeter;
    /*taking user input*/
    cout<<"Enter the  height rectangle:\n";
    cin>>height;
    cout<<" Enter the width rectangle:\n";
    cin>>width;
    /*APPLYING FORMULA*/
    perimeter=2*(height+width);
    cout<<"Perimeter of rectangle="<< perimeter;

}
