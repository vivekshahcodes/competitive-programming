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
    
    int ans = min(a[0],a[n-1]);

    for(int i=1;i<n-2;i++){
        ans = min(ans,max(a[i],a[i+1]));
    }

    cout<<ans;

    return 0;
}
