#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string str; cin>>str;
    string m;
    for(int i=0; i<str.size(); i++) {
        if(str[i] == '.'){
            m = m + '0';
        }
        if(str[i]=='-' && str[i+1] == '.'){
            m = m + '1';
            i++;
        }
        if(str[i]=='-' && str[i+1] == '-'){
            m = m + '2';
            i++;
        }
 
    }  
 
    cout<<m<<endl;
 
    
 
}