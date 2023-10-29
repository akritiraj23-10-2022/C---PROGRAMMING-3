/*Write the program to swapping of two number third variable method 2*/
#include<iostream>
using namespace std;
int main()
{
    int a=10 ,b=20,c;
    cout<<"Enter before swapping a="<<a<<"  and b="<<b<<"\n";
    c=a+b;
    a=c-a;
    b=c-b;
    cout<<"Enter after swapping a="<<a<<" and b="<<b<<"\n";
    return 0;
}

