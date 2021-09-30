#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    char a[n+1][m+1];
    bool b[n+1][m+1];

    memset(b,true,sizeof(b));

    for(int i=1;i<=n;i++){
        map<char,int> ma;
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(ma.count(a[i][j])>0){
                b[i][j] = false;
                for(auto x:ma){
                    if(x.first==a[i][j]){
                        b[i][x.second] = false;
                    }
                }
            }
            ma[a[i][j]] = j;
        }
    }

    for(int j=1;j<=m;j++){
        map<char,int> ma;
        for(int i=1;i<=n;i++){
            if(ma.count(a[i][j])>0){
                b[i][j] = false;
                for(auto x:ma){
                    if(x.first==a[i][j]){
                        b[x.second][j] = false;
                    }
                }
            }
            ma[a[i][j]] = i;
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(b[i][j]){
                cout<<a[i][j];
            }
        }
    }

    return 0;
}
