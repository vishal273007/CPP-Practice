// C++ program for operator-2.
#include<iostream>
using namespace std;

int main(){
//     int i=0;
//    //    0     0     1     1 
//     i = i++ - --i + ++i - i--;
//     //0(i-- post decrement value.)
//     cout<<i<<endl;

    int i=1, j=2, k=3;
    int m = i-- - j-- - k--;
    
    cout<<i<<endl; //0
    cout<<j<<endl; //1
    cout<<k<<endl; //2
    cout<<m<<endl;

    return 0;
}