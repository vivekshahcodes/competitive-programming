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
    
    int e = a[k-1];

    int ans = 0;

    for(int i=0;i<n;i++){
        if(a[i]>=e && a[i]!=0){
            ans++;
        }
    }

    cout<<ans;


    return 0;
}
