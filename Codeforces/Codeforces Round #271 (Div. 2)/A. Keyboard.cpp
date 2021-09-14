#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char c;

    cin>>c;

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";

    map<char,char> left, right;

    for(int i=0;i<s.length()-1;i++){
        left[s[i]] = s[i+1];
    }

    for(int i=1;i<s.length();i++){
        right[s[i]] = s[i-1];
    }

    string t;

    cin>>t;

    if(c=='R'){
        for(int i=0;i<t.length();i++){
            cout<<right[t[i]];
        }
    }else{
        for(int i=0;i<t.length();i++){
            cout<<left[t[i]];
        }
    }

    return 0;
}
