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

    vector<int> r,c;
    set<int> x,y;

    bool one = false;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
            if(a[i][j]){
                one = true;
            }
        }
    }

    if(!one){
        cout<<"YES\n";
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<0<<" ";
            }
            cout<<endl;
        }
        return 0;
    }

    for(int i=1;i<=n;i++){
        bool flag = true;
        for(int j=1;j<=m;j++){
            if(a[i][j]==0){
                flag = false;
                break;
            }
        }

        if(flag){
            r.push_back(i);
            x.insert(i);
        }
    }

    for(int j=1;j<=m;j++){
        bool flag = true;
        for(int i=1;i<=n;i++){
            if(a[i][j]==0){
                flag = false;
                break;
            }
        }

        if(flag){
            c.push_back(j);
            y.insert(j);
        }
    }

    for(int i=0;i<r.size();i++){
        for(int j=0;j<c.size();j++){
            b[r[i]][c[j]] = 1;
        }
    }

    bool flag = false;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==1 && !(x.count(i)||y.count(j))){
                cout<<"NO";
                return 0;
            }else if(a[i][j]==1 && (x.count(i) && y.count(j))){
                flag = true;
            }
        }
    }

    if(!flag){
        cout<<"NO";
        return 0;
    }

    cout<<"YES\n";

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
