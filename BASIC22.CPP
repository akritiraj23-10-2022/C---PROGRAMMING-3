/*Write the program octal to decimal number*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    /*variable declaration*/
    long octal ,temp,decimal;
    int rem,place;
    /*taking to user input*/
    cout<<"Enter the any octal number:\n";
    cin>>octal;
    /*passing octal value to temp varaiable*/
    temp=octal;
    /*initalizing decimal and place variable*/
    decimal=0;
    place =0;
    /*conversion of octal to decimal*/
    while(temp>0)
    {
      /*getting last digit of octal*/
      rem =temp % 10;
      /*convert last octal digit to decimal*/
      decimal +=pow(8,place)*rem ;
      /*removing the last octal digit */
      temp =temp/10;
      /*incrementing the place value*/
      place++;
    }
    cout<<"octal number:"<<octal<<endl;
    cout<<"Decimal number:"<<decimal<<endl;

}
