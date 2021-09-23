#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int dx[] = {0,0,1,1};
int dy[] = {0,1,0,1};

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char a[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }

    bool ans = false;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            map<char,int> m;
            for(int k=0;k<4;k++){
                m[a[i+dx[k]][j+dy[k]]]++;
            }
            for(auto i:m){
                if(i.second>2){
                    ans = true;
                }
            }
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
