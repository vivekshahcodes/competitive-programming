#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[6][6];
    memset(a,0,sizeof(a));

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[x][y] = 1;
        a[y][x] = 1;
    }

    bool ans = false;

    for(int i=1;i<=3;i++){
        for(int j=i+1;j<=4;j++){
            for(int k=j+1;k<=5;k++){
                if(a[i][j]==a[j][k] && a[j][k]==a[k][i]){
                    ans = true;
                    break;
                }
            }
        }
    }

    if(ans){
        cout<<"WIN";
    }else{
        cout<<"FAIL";
    }

    return 0;
}
