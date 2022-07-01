#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    
    ll t;
    cin>>t;
    
    while(t--){
        ll n,m;
        cin>>n>>m;

        cout<<(m*(m+1))/2 + m*((n*(n+1))/2) - m<<"\n";
    }
    
    return 0;
}
