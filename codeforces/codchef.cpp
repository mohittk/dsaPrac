#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;
         int cnt=0;
        while(n--){
            ll x,y; cin>>x>>y;

            if(x == 0 && y == 0){
                cnt++;
            }
           
            if(x!=0 || y!=0){
                cnt++;
            }
            
        }
        cout<<cnt<<endl;
    }

}