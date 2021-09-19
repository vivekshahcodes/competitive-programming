#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    ll ans = 0;

    while(s.length()>1){
        ll x = 0;
        for(ll i=0;i<s.length();i++){
            x+=s[i]-'0';
        }
        s = to_string(x);
        ans++;
    }

    cout<<ans;

    return 0;
}
