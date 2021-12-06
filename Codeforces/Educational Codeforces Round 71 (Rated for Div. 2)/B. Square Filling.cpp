#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    int a[n+1][m+1], b[n+1][m+1];
    memset(b,0,sizeof(b));

    int one = 0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]){
                one++;
            }
        }
    }

    vector<pair<int,int>> v;

    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][j] && a[i][j+1] && a[i+1][j] && a[i+1][j+1]){
                b[i][j] = 1;
                b[i][j+1] = 1;
                b[i+1][j] = 1;
                b[i+1][j+1] = 1;

                v.push_back({i,j});
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j] != b[i][j]){
                cout<<-1;
                return 0;
            }
        }
    }

    cout<<v.size()<<endl;
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
