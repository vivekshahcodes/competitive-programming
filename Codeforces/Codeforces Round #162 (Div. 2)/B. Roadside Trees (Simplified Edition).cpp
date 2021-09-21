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

    int ans = 0, prev = 0;

    for(int i=0;i<n;i++){
        ans += abs(prev-a[i]);
        ans ++;
        if(i!=n-1){
            ans ++;
        }
        prev = a[i];
    }

    cout<<ans;

    return 0;
}
