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

    if(n==1){
        cout<<1;
        return 0;
    }

    int ans = 2;
    int curr = 2;

    for(int i=0;i<n-2;i++){
        if(a[i]+a[i+1]==a[i+2]){
            curr++;
            ans = max(ans,curr);
        }else{
            curr = 2;
        }
    }

    cout<<ans;

    return 0;
}
