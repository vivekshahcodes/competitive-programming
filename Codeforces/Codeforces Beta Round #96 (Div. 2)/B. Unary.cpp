#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<char,int> m;

    m['>'] = 0;
    m['<'] = 1;
    m['+'] = 2;
    m['-'] = 3;
    m['.'] = 4;
    m[','] = 5;
    m['['] = 6;
    m[']'] = 7;

    string a[] = {"1000","1001","1010","1011","1100","1101","1110","1111"};

    string s;

    cin>>s;

    string ans;

    for(int i=0;i<s.length();i++){
        ans += a[m[s[i]]];
    }

    ll c = 1;
    ll res = 0;
    ll mo = 1e6 + 3;

    for(ll i=ans.length()-1;i>=0;i--){
        if(ans[i]=='1'){
            res = (res + c%mo)%mo;
        }
        c = (c*2)%mo;
    }

    cout<<res;

    return 0;
}
