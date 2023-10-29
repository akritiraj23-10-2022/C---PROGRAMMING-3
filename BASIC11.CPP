/*Write the program simple Interest*/
#include<iostream>
using  namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter the principle\n";
    cin>>p;
    cout<<"Enter the rate\n";
    cin>>r;
    cout<<"Enter the time\n";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"simple interest="<<si;
    return 0;
}
