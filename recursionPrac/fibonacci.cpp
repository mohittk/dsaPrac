#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n){
    if(n==0) return 0;
    if(n==1) return 1;

    
    int smallout = solve(n-1);
    int smallout2 = solve(n-2);

    return smallout + smallout2;
}

int main(){
    int n; cin>>n;
    int out = solve(n);
    cout<<out<<endl;

}