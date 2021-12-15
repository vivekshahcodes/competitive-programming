#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    string s;

    cin>>s;

    ll pref = 0;

    for(ll i=0;i<n;i++){
        if(s[i]==s[0]){
            pref++;
        }else{
            break;
        }
    }

    ll suff = 0;

    for(ll i=n-1;i>=0;i--){
        if(s[i]==s[n-1]){
            suff++;
        }else{
            break;
        }
    }

    ll ans = pref + suff + 1, m = 998244353;

    if(s[0]==s[n-1]){
        ans = (ans + (pref*suff)%m)%m;
    }

    cout<<ans;

    return 0;
}
