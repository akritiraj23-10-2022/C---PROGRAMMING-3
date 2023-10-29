/*WRITE THE PROGRAMMING CONVERT OF STRING WITHOUT STRING FUNCTION*/
#include<iostream>
using namespace std;
int main()
{
    /*variable declaration*/
    char ch[200];
    int count=0;
    /*taking user input*/
    cout<<"Enter the any string\n";
    cin.getline(ch,200);
    for(int i=0;ch[i]!='\0';i++)
    {
        /*incrementing the counter*/
        count++;
    }
    cout<<"\nTotal length="<<count;
}
