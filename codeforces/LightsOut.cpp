#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int m=0;
    int m11,m12,m13,m21,m22,m23,m31,m32,m33;
    cin>>m11>>m12>>m13>>m21>>m22>>m23>>m31>>m32>>m33;
 
    cout<<((m12+m21+m11)% 2 == 0 ? "1" : "0") << ((m12+m11+m13+m22) % 2 == 0 ? "1" : "0") << ((m13+m12+m23) % 2 == 0 ? "1" : "0")<<"\n";
    cout<<((m21+m22+m11+m31) % 2 == 0 ? "1" : "0") << ((m21+m22+m23+m12+m32) % 2 == 0 ? "1" : "0") << ((m23+m13+m33+m22) % 2 == 0 ? "1" : "0") <<"\n";
    cout<<((m31+m32+m21) % 2 == 0 ? "1" : "0") << ((m32+m22+m33+m31) % 2 == 0 ? "1" : "0") << ((m33+m23+m32) % 2 == 0 ? "1" : "0")<<"\n";
 
    // for(int i=1; i<=3; i++){
    //     for(int j=1; j<=3; j++){
    //         cin>>arr[i][j];
    //     }
        
    // }
    //   for(int i=1; i<=3; i++){
      
    //     for(int j=1; j<=3; j++){
        
            
    //         if((arr[1][1] + arr[1][2] + arr[2][1]) %2 == 0 ){cout<<1;break;}
    //         else{cout<<0;}
 
    //         if((arr[1][1] + arr[1][2] + arr[1][3] + arr[2][2]) %2 == 0){cout<<1;break;}
    //         else {cout<<0;}
 
    //         if((arr[1][2] + arr[1][3] + arr[2][3]) % 2 == 0){cout<<1;break;}
    //         else{cout<<0;}
 
 
    //         if((arr[1][1] + arr[2][1] + arr[3][1] + arr[2][2]) % 2 == 0){cout<<1;break;}
    //         else {cout<<0;}
 
    //         if((arr[2][2] + arr[2][3] + arr[3][2] + arr[2][1] + arr[1][2]) % 2 == 0){cout<<1;break;}
    //         else {cout<<0;}
 
    //         if((arr[2][3] + arr[2][2] + arr[1][3] + arr[3][3]) %2 == 0){cout<<1;break;}
    //         else {cout<<0;}
 
    //         if((arr[3][1] + arr[2][1] + arr[3][2]) % 2 == 0) {cout<<1;break;}
    //         else{cout<<0;}
 
    //         if((arr[3][2] + arr[2][2] + arr[3][1] + arr[3][3]) % 2 == 0) {cout<<1;break;}
    //         else{cout<<0;}
 
    //         if((arr[3][3] + arr[2][3] + arr[3][2]) % 2 == 0){cout<<1;break;}
    //         else{cout<<0;}
    //     }
        
    // }
 
    
   
    
 
    
 
    
    
 
    
 
}