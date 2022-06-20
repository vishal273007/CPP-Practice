// C++ program for operator-2.
#include<iostream>
using namespace std;

int main(){

    int i=0;
   //    0     0     1     1 
    i = i++ - --i + ++i - i--;
    //0(i-- post decrement value.)
    cout<<i<<endl;
 
    return 0;
}