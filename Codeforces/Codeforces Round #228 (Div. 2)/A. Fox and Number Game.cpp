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

    int ans = a[0];

    for(int i=1;i<n;i++){
        ans = __gcd(a[i],ans);
    }

    cout<<ans*n;

    return 0;
}
