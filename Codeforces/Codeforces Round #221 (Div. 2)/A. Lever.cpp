#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    ll pivot;

    for(ll i=0;i<s.length();i++){
        if(s[i]=='='){
            continue;
        }else if(s[i]=='^'){
            pivot = i+1;
        }
    }

    ll left = 0, right = 0;

    for(ll i=0;i<s.length();i++){
        ll x = s[i]-'0';
        if(x>0 && x<10){
            if(pivot>i+1){
                left += x*(pivot-i-1);
            }else{
                right += x*(i+1-pivot);
            }
        }
    }

    if(left>right){
        cout<<"left";
    }else if(right>left){
        cout<<"right";
    }else{
        cout<<"balance";
    }

    return 0;
}
