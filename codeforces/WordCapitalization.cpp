#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >>str;
    for(int i=0; i<str.size(); i++){
        if(str[0]>= 'A' && str[0]<='Z'){
            continue;
        }
        else{
            char ch;
            ch = toupper(str[0]);
            str[0] = ch;
        }

    }

    for(int i=0; i<str.size(); i++){
        cout<<str[i];
    }

}