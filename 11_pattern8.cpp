// C++ program to print 1 and 0 from one row to nth row. column in increasing order.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "; cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0 ";
            }
        }

        cout<<endl;
    }

    return 0;
}