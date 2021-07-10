#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;
    
    cin>>n>>k;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ans = 0,ind = n-1;

    for(int i=0;i<n;i++){
        if(a[i]<=k){
            ans++;
        }else{
            ind = i;
            break;
        }
    }

    for(int i=n-1;i>ind;i--){
        if(a[i]<=k){
            ans++;
        }else{
            break;
        }
    }

    cout<<ans;

    return 0;
}
