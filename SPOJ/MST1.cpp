#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll dp[20000015] = {0};

void minStepsToOne(){   
    
    dp[1] = 0;

    for(ll i=2;i<=2e7;i++){
        ll a,b,c;
        a = b = c = INT_MAX;

        a = dp[i-1]+1;

        if(i%2==0){
            b = dp[i/2]+1;
        }

        if(i%3==0){
            c = dp[i/3]+1;
        }

        dp[i] = min(a,min(b,c));
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t, c = 1;

    cin>>t;

    minStepsToOne();

    while(t--){

        ll n;

        cin>>n;

        cout<<"Case "<<c<<": "<<dp[n]<<endl;

        c++;

    }

    return 0;
}
