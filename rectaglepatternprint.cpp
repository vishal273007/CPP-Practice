// C++ program to print pattern of rectanle using for loop.
#include<iostream>
using namespace std;

int main(){
    int row, col;
    cout<<"Enter no. of rows : ";
    cin>>row;
    cout<<"Enter no. of cols : ";
    cin>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}