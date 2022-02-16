#include <bits/stdc++.h>
#define ll long long
using namespace std;


int func(int n){
    int cnt=0;
    if(n==0){
        return 0;
    }
    else{
        cnt++;
        int small = func(n/10);
        int ans = small +1;
        return ans;



    }
}

int main(){

    int n; cin>>n;
    int out = func(n);
    cout<<out;

}