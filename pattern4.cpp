// C++ program for print 1 to n as one 1 at row one and two times 2 at line to and n line at line n and so on
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number : "; cin>>n;

    for(int i=1; i<=n; i++){
        for (int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}