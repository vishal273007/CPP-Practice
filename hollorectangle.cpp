// C++ program for printing hollow rectangle pattern.
#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"Enter no of rows : "; cin>>row;
    cout<<"Enter no of cols : "; cin>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
                
        }
    }

    return 0;
}