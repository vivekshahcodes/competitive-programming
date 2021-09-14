#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n],o=0,e=0,m=LLONG_MAX,ans=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1){
            o++;
            m = min(m,a[i]);
        }else{
            e++;
        }
        ans+=a[i];
    }

    if(o&1){
        ans-=m;
    }

    cout<<ans;

    return 0;
}
