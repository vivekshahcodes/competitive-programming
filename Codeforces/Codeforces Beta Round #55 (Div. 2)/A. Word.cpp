#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int l=0,u=0;

    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            u++;
        }else{
            l++;
        }
    }

    if(u>l){
        for(int i=0;i<s.length();i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i=0;i<s.length();i++){
            s[i] = tolower(s[i]);
        }
    }

    cout<<s;
    

    return 0;
}
