/*Write the program convert binary to decimal number*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long binary , decimal=0,temp ,digit;
    int n=0;
    cout<<"Enter the binary numbers\n";
    cin>>binary;

    temp=binary;
    while(temp!=0)
        {
//            digit=temp[];
            if(digit==1)
            {
                decimal=decimal+pow(2,n);
            }
            n++;
            temp=temp/10;
        }
        cout<<"Binary number :"<<binary<< endl;
        cout<<"Decimal number :"<<decimal << endl;
        return 0;

}
