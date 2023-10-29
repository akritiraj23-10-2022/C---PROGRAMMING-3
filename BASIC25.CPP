/*WRITE THE PROGRAM FIND THE LATERAL SURFACE AREA OF A RIGHT CICULAR CYLINDER*/
#include<iostream>
using namespace std;
int main()
{
    /*variable declaration*/
    float radius,height ,ar;
    /*taking user input*/
    cout<<"Enter the radius of cylinder:\n";
    cin>>radius;
    cout<<"Enter the height of cylinder:\n";
    cin>>height;
    /*Applying formula*/
    ar=2*3.14*radius*height;
    cout<<"Lateral surface area of a right circular cylinder="<<ar;
}
