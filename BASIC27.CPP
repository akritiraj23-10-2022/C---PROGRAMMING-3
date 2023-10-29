/*FIND THE  GREATER VALUE INT THREE NUMBER USING CONDITIONAL OPERATOR*/
#include<iostream>
using namespace std;
int main()
{
    /*variable declaration*/
    int a,b,c,max;
    /*taking user input*/
    cout<<"Enter a b AND c:\n";
    cin>>a>>b>>c;
    /*using conditional operator*/
    max=a>b?(a>c?a:c):(b>c?b:c);
    cout<<"Maximum value ="<<max;
}
