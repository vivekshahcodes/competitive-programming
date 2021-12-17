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

        ll n;

        cin>>n;

        vector<pair<ll,ll>> v;

        for(ll i=0;i<n;i++){
            ll input;
            cin>>input;
            v.push_back({input,i+1});
        }

        sort(v.begin(),v.end());

        string ans;
        
        ll mi = n+1, ma = -1;

        for(int i=0;i<n;i++){
            mi = min(mi,v[i].second);
            ma = max(ma,v[i].second);
            if(ma-mi==i){
                ans.push_back('1');
            }else{
                ans.push_back('0');
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
