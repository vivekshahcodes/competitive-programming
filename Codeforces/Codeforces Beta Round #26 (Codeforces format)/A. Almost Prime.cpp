#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void sieve(int p[], int n){

    for(int i=2;i<=n;i++){
        if(p[i]==0){
            for(int j=i;j<=n;j+=i){
                p[j]++;
            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int p[n+1] = {0};

    sieve(p,n);

    int ans = 0;

    for(int i=2;i<=n;i++){
        if(p[i]==2){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
