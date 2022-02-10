#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    ll n; cin>>n;
    int cnt=0;
    

    while(n!=0){
        if(n%10 == 4 || n%10 == 7){
            cnt= cnt +1;
        }
        n=n/10;
    }

    if(cnt == 4 || cnt == 7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    // cout<<cnt<<endl;

   
    // if(cnt == str.size()){cout<<"YES"<<endl;}
    // else{cout<<"NO"<<endl;}



}