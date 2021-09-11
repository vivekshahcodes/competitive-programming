#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k,time=0;

    cin>>n>>k;

    k = 240-k;

    int ans = 0;

    for(int i=1;i<=n;i++){
        time+=i*5;
        if(time<=k){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
