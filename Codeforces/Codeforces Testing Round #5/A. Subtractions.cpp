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

        ll a,b;

        cin>>a>>b;

        ll x = min(a,b);
        ll y = max(a,b);

        bool flag = true;

        ll ans = 0;

        while(x>0 && y>0){
            
            if(flag){
                ans += y/x;
                y %= x;
                flag = false;
            }else{
                ans += x/y;
                x %= y;
                flag = true;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
