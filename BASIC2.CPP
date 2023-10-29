//write the the size the bites intgear ,float,boolean char
#include <iostream>
using namespace std;
int main()
{

    int a;//declaration
    a=12;//initialisation

    cout<<"Enter the size of int:-"<<sizeof(a)<<endl;
    float b;
    cout<<"Enter the size of float:-"<<sizeof(b)<<endl;
    char c;
    cout<<"Enter the size of char:-"<<sizeof(c)<<endl;
    bool d;
    cout<<"Enter the size of bool:-"<<sizeof(d)<<endl;
    short int si;
    long int li;
    cout<<"size of shortint"<<sizeof(si)<<endl;
    cout<<"size of longint"<<sizeof(li)<<endl;
    return 0;
}
