#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    vector<bool> badRow(n+1,false),badCol(n+1,false);

    int ans = n*m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char c;
            cin>>c;
            if(c=='S'){
                badRow[i] = true;
                badCol[j] = true;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(badRow[i] && badCol[j]){
                ans--;
            }
        }
    }

    cout<<ans;

    return 0;
}
