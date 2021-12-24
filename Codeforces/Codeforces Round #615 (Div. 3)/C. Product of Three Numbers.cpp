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

        vector<ll> ans;

        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                ans.push_back(i);
                break;
            }
        }

        if(ans.size()==0){
            cout<<"NO\n";
        }else{
            n/=ans[0];
            for(ll i=2;i*i<n;i++){
                if(n%i==0 && i!=ans[0]){
                    ans.push_back(i);
                    ans.push_back(n/i);
                    break;
                }
            }

            if(ans.size()==3){
                cout<<"YES\n";
                for(auto i:ans){
                    cout<<i<<" ";
                }
                cout<<"\n";
            }else{
                cout<<"NO\n";
            }
        }

    }

    return 0;
}
