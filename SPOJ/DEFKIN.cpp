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

        ll n,m,k;

        cin>>n>>m>>k;

        vector<ll> x;
        vector<ll> y;

        x.push_back(0);
        x.push_back(n+1);
        y.push_back(0);
        y.push_back(m+1);

        while(k--){

            ll a,b;
            cin>>a>>b;
            x.push_back(a);
            y.push_back(b);
        }

        sort(x.begin(),x.end());
        sort(y.begin(),y.end());

        ll maxx = 0, maxy = 0;

        for(ll i=1;i<x.size();i++){
            maxx = max(maxx,x[i]-x[i-1]-1);
        }

        for(ll i=1;i<y.size();i++){
            maxy = max(maxy,y[i]-y[i-1]-1);
        }

        cout<<maxx*maxy<<"\n";
    }

    return 0;
}
