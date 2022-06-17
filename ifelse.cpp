#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r" , stdin);
        freopen("output.txt", "w" , stdout);
    #endif

    int savings;
    cin>>savings;

    if(savings>5000){
        if(savings>10000)
            cout<<"Roadtrip with Neha."<<endl;
        else
            cout<<"Shopping with Neha."<<endl;
    }
        
    else if(savings>2000)
        cout<<"Rashmi";
    else
        cout<<"Friends";

    return 0;
}