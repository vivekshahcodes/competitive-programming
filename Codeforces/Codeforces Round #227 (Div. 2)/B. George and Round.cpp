#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int a[n],b[k];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<k;i++){
        cin>>b[i];
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        int x = lower_bound(b,b+k,a[i])-b;
        if(x==k){
            ans++;
        }else if(b[x]==a[i]){
            continue;
        }else{
            b[x] = a[i];
        }
    }

    cout<<ans;

    return 0;
}
