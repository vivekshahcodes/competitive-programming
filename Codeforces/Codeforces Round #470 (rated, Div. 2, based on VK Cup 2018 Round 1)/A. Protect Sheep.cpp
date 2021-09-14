#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    char a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='.'){
                a[i][j] = 'D';
            }
        }
    }

    bool flag = true;

    for(int i=0;i<n;i++){
        for(int j=0;j<m-1;j++){
            if(a[i][j]=='S' && a[i][j+1]=='W'){
                flag = false;
            }else if(a[i][j]=='W' && a[i][j+1]=='S'){
                flag = false;
            }
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='S' && a[i+1][j]=='W'){
                flag = false;
            }else if(a[i][j]=='W' && a[i+1][j]=='S'){
                flag = false;
            }
        }
    }

    if(flag){
        cout<<"Yes"<<endl;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }else{
        cout<<"No";
    }

    return 0;
}
