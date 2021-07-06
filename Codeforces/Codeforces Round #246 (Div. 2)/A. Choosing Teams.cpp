#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k;

    cin>>n>>k;

    int maxReq = 5-k, ans = 0;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=maxReq){
            ans++;
        }
    }

    cout<<ans/3;  

    return 0;
}
