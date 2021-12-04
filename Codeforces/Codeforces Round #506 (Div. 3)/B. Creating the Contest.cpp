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

    ll curr = 1, ans = 1;

    for(int i=1;i<n;i++){
        if(a[i]<=a[i-1]*2){
            curr++;
            ans = max(curr,ans);
        }else{
            curr = 1;
        }
    }

    cout<<ans;

    return 0;
}
