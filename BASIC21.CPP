/*Write the program convert the octal to binary number*/
#include<iostream>
using namespace std;
int main()
{
    /*Variable declaration*/
    int octal_constant[] ={0,1,10,100,101,110,111};
    long octal ,temp, binary, place;
    int rem;
    /*taking user input*/
    cout<<"enter the any octal number\n";
    cin>>octal;
    /*passing octal to temp variable*/
    temp =octal;
    binary=0;
    place=1;
    while(temp > 0)
    {
        /*getting last digit of octal*/
        rem = temp %10;
        /*finding binary value*/
        binary = (octal_constant[rem]*place)+binary;

        /*removing the last octal digit*/
        temp=temp/10;
        /*increasing the place value*/
        place =place*1000;
    }
    cout<<"Octal number:"<<octal<<endl;
    cout<<"Binary number:"<<binary<<endl;
}
