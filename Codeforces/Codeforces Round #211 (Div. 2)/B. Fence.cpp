#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    int ans = 0, curr = 0, ind = 1;

    for(int i=1;i<=k;i++){
        ans += a[i];
    }

    curr = ans;

    for(int i=k+1;i<=n;i++){
        curr += a[i];
        curr -= a[i-k];
        if(curr<ans){
            ans = curr;
            ind = i-k+1;
        }
    }

    cout<<ind;

    return 0;
}
