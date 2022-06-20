// C++ program for inverted pattern ie. to print number column number downside each columns and rows decreasingly(n+1-row).
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "; cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}