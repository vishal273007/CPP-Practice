// C++ program to print 1 to n but no repeatition of allowed of number.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "; cin>>n;

    int count=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}