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

        string ans;

        for(ll i=1;i<=n/2;i++){
            ans+="1";
        }

        if(n&1){
            ans[0] = '7';
        }

        cout<<ans<<endl;
        
    }

    return 0;
}
