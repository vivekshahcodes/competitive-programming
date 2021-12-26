#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

void floodFill(vector<vector<char>> &v, int i, int j, int n, int m){

    if(i<0 || j<0 || i>=n || j>=m){
        return;
    }

    if(v[i][j]!='.'){
        return;
    }

    v[i][j] = 'R';

    for(int ind=0;ind<4;ind++){
        floodFill(v,i+dx[ind],j+dy[ind],n,m);
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;
    cin>>n>>m;

    vector<vector<char>> v;

    for(int i=0;i<n;i++){
        vector<char> temp;
        for(int j=0;j<m;j++){
            char input;
            cin>>input;
            temp.push_back(input);
        }
        v.push_back(temp);
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]=='.'){
                ans++;
                floodFill(v,i,j,n,m);
            }
        }
    }

    cout<<ans;

    return 0;
}
