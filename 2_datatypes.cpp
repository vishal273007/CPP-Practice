// C++ program for datatypes
#include<iostream>
using namespace std;

int main(){
    int a; //declaration
    a=12; //initialization

    cout<<"Size of Int : "<<sizeof(a)<<endl;
    
    float b;
    cout<<"Size of float : "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of char : "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of bool : "<<sizeof(d)<<endl;

    short int si;
    cout<<"Size of short int : "<<sizeof(si)<<endl;

    long long int li;
    cout<<"Size of long int : "<<sizeof(li)<<endl;

    return 0;
}