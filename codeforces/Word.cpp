#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >>str;
    int up=0, low=0;

    for(int i = 0; i <str.size(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            up++;
        }
        if(str[i] >= 'a' && str[i] <='z'){
            low++;
        }

        
    }
    if(up>low){
        for(int i=0; i<str.size(); i++){
            char ch;
            ch = toupper(str[i]);
            cout<<ch;
            
        }
    }
    if(low>up || low==up){
        for(int i=0; i<str.size(); i++){
            char ch;
            ch = tolower(str[i]);
            cout<<ch;
            
        }

    }
    
}