#include<bits/stdc++.h>
using namespace std;

#define int long long int

bool tub(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<=pow(n,0.5);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

signed main(){
    int n;
    cout<<"N = ";
    cin>>n;
    cout<<tub(n)<<endl;
    return 0;
}