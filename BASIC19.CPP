 /*write the program convert binary to hexadecimal number*/
 #include<iostream>
 #include<string.h>
 using namespace std;
 int main()
 {
     int hex_constant[] ={0,1,10,11,100,101,110,111,1001,1010,1011,1100,1101,1110,1111};
     long long binary, temp;
     char hex[20];
     int index,i,digit;
     /*taking user input*/
     cout<<"Enter any binary number: \n";
     cin>> binary;
     /*passing binary number to temp variable*/
     temp = binary;
     index = 0;
     /*find hexadecimal of binary number*/
     while(temp!=0)
     {
         /*getting last four digits of binary number */
         digit = temp % 10000;
         /*Find hexadecimal equivalent of last four digit*/
         for(i=0;i<=15;i++)
         {
             if(hex_constant[i] == digit)
             {
                 if(i<10)
                 {
                     /*0-9 integer constant*/
                     hex[index] = (char)(i + 48);
                 }
                 else
                 {
                     /*A-F character constant*/
                     hex[index]=(char)((i-10) + 65);
                 }
                 index ++;
                 break;
             }
         }
         /*removing the last 4 digit of binary */
         temp /= 10000;
     }
     hex[index] = '\0';
     /*reverse the hex digits*/
     strrev(hex);
     cout<<"Binary number :"<<binary<<endl;
     cout<<"Hexadecimal number :"<<hex<<endl;
 }
