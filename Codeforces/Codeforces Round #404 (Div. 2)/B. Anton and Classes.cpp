#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll minChess = LLONG_MAX, maxChess = 0;

    for(int i=0;i<n;i++){
        
        ll a,b;

        cin>>a>>b;

        maxChess = max(maxChess,a);
        minChess = min(minChess,b);
    }

    ll m;

    cin>>m;

    ll minProgramming = LLONG_MAX, maxProgramming = 0;

    for(int i=0;i<m;i++){

        ll a,b;
        
        cin>>a>>b;

        maxProgramming = max(maxProgramming,a);
        minProgramming = min(minProgramming,b);
    }

    cout<<max(0ll,max(maxChess-minProgramming,maxProgramming-minChess));

    return 0;
}
