#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n,m;

        cin>>n>>m;

        vector<pair<ll,string>> v;

        for(ll i=0;i<n;i++){

            string s;
            cin>>s;

            int ones = 0;

            for(int i=0;i<m;i++){
                if(s[i]=='1'){
                    ones++;
                }
            }

            v.push_back({ones,s});
        }

        sort(v.begin(),v.end());

        string x;

        for(auto i:v){
            x += i.second;
        }

        ll inv = 0, ones = 0;

        for(ll i=0;i<x.length();i++){
            if(x[i]=='1'){
                ones++;
            }else{
                inv += ones;
            }
        }

        cout<<inv<<endl;
    }

    return 0;
}
