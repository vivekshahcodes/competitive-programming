#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m;

    cin>>n>>m;

    char a[n+1][m+1];

    memset(a,'.',sizeof(a));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i&1){
                a[i][j] = '#';
            }
        }
    }

    for(int i=2;i<n;i+=2){
        if(i%4==0){
            a[i][1] = '#';
        }else{
            a[i][m] = '#';
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }


    return 0;
}
