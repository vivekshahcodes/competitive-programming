#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    ll curr = 0, ans = 0;

    for(int i=0;i<n;i++){
        a[i] += curr;
        if(a[i]==0){
            continue;
        }
        curr += -a[i];
        ans += abs(a[i]);
    }

    cout<<ans;

    return 0;
}
