#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    ll ans = 1;

    for(int i=0;i<n;i++){
        if(a[i]==ans){
            ans++;
        }else if(a[i]>ans){
            a[i] = ans;
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
