#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int a = 0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='4'||s[i]=='7'){
            a++;
        }
    }

    string x = to_string(a);

    bool ans = true;

    for(int i=0;i<x.length();i++){
        if(x[i]!='4' && x[i]!='7'){
            ans = false;
            break;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}
