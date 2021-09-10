#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;

    cin>>n>>k;

    int a[n], ans = 0, target;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==k-1){
            target = a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>=target && a[i]!=0){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
