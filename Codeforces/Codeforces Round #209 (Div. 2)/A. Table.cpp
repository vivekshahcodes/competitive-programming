#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    int a[n+1][m+1];

    bool edge = false;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]==1 && (i==1||j==1||i==n||j==m)){
                edge = true;
            }
        }
    }

    if(edge){
        cout<<2;
    }else{
        cout<<4;
    }

    return 0;
}
