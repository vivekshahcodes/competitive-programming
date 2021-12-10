#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(int n){

    if(n<2){
        return false;
    }

    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int p[100004];

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    for(int i=1;i<=100003;i++){
        if(isPrime(i)){
            p[i] = i;
        }
    }

    for(int i=100003;i>=1;i--){
        if(p[i]==0){
            p[i] = p[i+1];
        }
    }

    int n,m;

    cin>>n>>m;

    int a[n+1][m+1], b[n+1][m+1];
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            b[i][j] = p[a[i][j]]-a[i][j];
        }
    }

    int ans = INT_MAX;

    for(int i=1;i<=n;i++){
        int curr = 0;
        for(int j=1;j<=m;j++){
            curr += b[i][j];
        }
        ans = min(ans,curr);
    }

    for(int j=1;j<=m;j++){
        int curr = 0;
        for(int i=1;i<=n;i++){
            curr += b[i][j];
        }
        ans = min(ans,curr);
    }

    cout<<ans;

    return 0;
}
