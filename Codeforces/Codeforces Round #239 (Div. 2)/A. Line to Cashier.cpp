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

    int ans = INT_MAX;

    for(int i=0;i<n;i++){
        int curr = 0;

        for(int j=0;j<a[i];j++){
            int x;
            cin>>x;
            curr+=x*5;
            curr+=15;
        }

        ans = min(ans,curr);
    }

    cout<<ans;

    return 0;
}
