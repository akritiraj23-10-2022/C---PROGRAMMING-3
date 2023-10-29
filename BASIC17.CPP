/*Write the program convert binary to octal number*/
#include<iostream>
using namespace std;
int main()
{
    //Declaration of octal constant
    int octal_constant[] = {0,1,10,100,110,111};
    //variable declaration
    long binary,octal,temp;
    int digit,place,i;
    octal = 0;
    place = 1;
    //taking user input
    cout<<"Enter the binary number\n";
    cin>>binary;
    //getting last three digit of binary
    temp=binary;
    while(temp!=0)
    {
        //getting last three digit of binary
        digit = temp % 1000;
        for(int i=0;i<=7;i++)
        {
            //comparing 3 digit binary with octal constant
            if(digit==octal_constant[i])
            {
                octal=(i*place)+octal;
                break;
            }
        }
        //Removing the last three digit of binary
        temp = temp/1000;
        //increase the place value
        place=place*10;
    }
    cout<<"Binary number:"<<binary<<endl;
    cout<<"Octal number:"<<octal<<endl;
    return 0;
}
