#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[4][4];

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>a[i][j];
        }
    }

    int x,y,z;

    for(int i=1;i<=100000;i++){
        
        x = i+a[1][2]+a[1][3];
        y = x-(a[2][1]+a[2][3]);
        z = x-(a[3][1]+a[3][2]);
        if(y<1 || z<1) continue;

        if(i+y+z != x) continue;

        a[1][1] = i;
        a[2][2] = y;
        a[3][3] = z;

        break;
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
