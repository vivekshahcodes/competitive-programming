#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n,m,a;

    cin>>n>>m>>a;

    ll l = n/a;
    ll w = m/a;

    if(n%a!=0){
        l+=1;
    }

    if(m%a!=0){
        w+=1;
    }

    cout<<l*w;



    return 0;
}
