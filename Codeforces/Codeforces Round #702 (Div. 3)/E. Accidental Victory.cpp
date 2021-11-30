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

        ll a[n],b[n] = {0};
        vector<pair<ll,ll>> v;

        for(ll i=0;i<n;i++){
            cin>>a[i];
            v.push_back({a[i],i});
        }

        sort(v.begin(),v.end());
        sort(a,a+n);

        b[0] = a[0];

        for(ll i=1;i<n;i++){
            b[i] = a[i] + b[i-1];
        }

        vector<ll> ans;

        for(ll i=n-1;i>=0;i--){
            if(i==n-1){
                ans.push_back(v[i].second+1);
            }else{
                if(b[i]>=a[i+1]){
                    ans.push_back(v[i].second+1);
                }else{
                    break;
                }
            }
        }

        sort(ans.begin(),ans.end());

        cout<<ans.size()<<endl;

        for(auto i:ans){
            cout<<i<<" ";
        }       

        cout<<endl;

    }

    return 0;
}
