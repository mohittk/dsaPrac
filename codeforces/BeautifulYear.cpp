#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n; cin>>n;
    bool flag = true;
 
    while(flag){
           n= n+1;
        int x = n%10;
        int y = n%100 / 10;
        int z = n%1000 / 100;
        int m = n /1000;
 
        if(x!=y && x!=z && x!=m && y!=z && y!=m && z!=m){
            break;
        }
     
 
 
    }
 
    cout<<n;
 
    
 
    
 
}