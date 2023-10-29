/*Write the program check leap year*/
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter any year\n";
    cin>>year;
    cout<<"Enter any year\n";
    cin>>year;
    if(((year%4==0)&&(year%100!=0))||(year %400==0))
    {
        cout<<"leap year";
    }
    else
    {
        cout<<"Common year";
    }
    return 0;
}
