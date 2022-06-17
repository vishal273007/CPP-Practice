#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Divisible by both."<<endl;
    }
    else if(n%2==0){
        cout<<"Divisible by 2 only."<<endl;
    }
    else if(n%3==0){
        cout<<"Divisible by 3 only."<<endl;
    }
    else{
        cout<<"Divisible by none."<<endl;
    }

    return 0;
}