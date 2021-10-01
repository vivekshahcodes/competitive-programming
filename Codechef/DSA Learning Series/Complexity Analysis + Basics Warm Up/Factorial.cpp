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

        ll pow = 5, ans = 0;

        while(n/pow!=0){
            ans += n/pow;
            pow*=5;
        }

        cout<<ans<<endl;

    }

    return 0;
}
