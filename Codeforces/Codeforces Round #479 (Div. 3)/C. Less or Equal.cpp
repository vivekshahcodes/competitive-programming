#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n,k;

    cin>>n>>k;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    if(k==0 && a[0]==1){
        cout<<-1;
    }else if(k==0 && a[0]!=1){
        cout<<a[0]-1;
    }else if(n==1 && k==1){
        cout<<a[0];
    }else if(a[k-1]==a[k]){
        cout<<-1;
    }else{
        cout<<a[k-1];
    }


    return 0;
}
