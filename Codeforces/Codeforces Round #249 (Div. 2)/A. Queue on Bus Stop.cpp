#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int curr = 0, ans = 0;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        
        if(a[i]+curr<k){
            curr += a[i];
            if(i==n-1){
                ans++;
            }
        }else if(a[i]+curr==k){
            ans++;
            curr = 0;
        }else{
            ans++;
            curr = a[i];
            if(i==n-1){
                ans++;
            }
        }
    }

    cout<<ans;

    return 0;
}
