/*Write the program to swapping of two without third variable 3*/
#include<iostream>
using namespace std;
int main()
{
    int a=10 ,b=20,c;
    cout<<"Enter before swapping a="<<a<<"  and b="<<b<<"\n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Enter after swapping a="<<a<<" and b="<<b<<"\n";
    return 0;
}

