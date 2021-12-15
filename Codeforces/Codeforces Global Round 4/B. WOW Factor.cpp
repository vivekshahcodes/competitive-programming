#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    string temp;
    bool start = false;

    for(ll i=0;i<s.length();i++){
        if(!start){
            if(s[i]=='v'){
                start = true;
            }else{
                temp.push_back(s[i]);
            }
        }else{
            if(s[i]=='v'){
                temp.push_back('w');
            }else{
                start = false;
                temp.push_back(s[i]);
            }
        }
    }

    vector<ll> v;
    ll c = 0;

    for(ll i=0;i<temp.length();i++){
        if(temp[i]=='w'){
            v.push_back(i);
            c++;
        }
    }

    ll ans = 0, w = 1;
    c--;

    for(ll i=1;i<v.size();i++){
        ans += w*c*(v[i]-v[i-1]-1);
        c--;
        w++;
    }

    cout<<ans;

    return 0;
}
