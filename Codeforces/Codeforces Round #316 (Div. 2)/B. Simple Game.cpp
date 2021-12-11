#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    if(n==1){
        cout<<1;
        return 0;
    }

    if(k<=n/2){
        cout<<k+1;
    }else{
        cout<<k-1;
    }

    return 0;
}
