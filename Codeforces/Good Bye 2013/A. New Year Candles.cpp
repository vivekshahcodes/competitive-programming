#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int ans = n, rem  = 0;

    while(n>0 && n>=k){
        
        rem = n%k;
        ans += n/k;
        n /= k;
        n += rem;
    }

    cout<<ans;

    return 0;
}
