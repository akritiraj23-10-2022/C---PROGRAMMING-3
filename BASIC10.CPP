/*Write the program input marks of five subjects like mathmatice,physics,chemistry,Hindi,English,and find average*/
#include<iostream>
using namespace std;
int main()
{
    float m,p,c,h,e,avg;
    cout<<"Enter the subjects Mathmatice\n";
    cin>>m;
     cout<<"Enter the subjects Physics\n";
    cin>>p;
     cout<<"Enter the subjects Chemistry\n";
    cin>>c;
     cout<<"Enter the subjects Hindi\n";
    cin>>h;
     cout<<"Enter the subjects English\n";
    cin>>e;
    avg=(m+p+c+h+e)/5;
    cout<<"Average of result="<<avg;
    return 0;
}
