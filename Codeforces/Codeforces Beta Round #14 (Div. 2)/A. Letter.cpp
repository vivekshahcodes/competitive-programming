#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m,minI=INT_MAX,minJ=INT_MAX,maxI=0,maxJ=0;

    cin>>n>>m;

    char a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'){
                minI = min(minI,i);
                minJ = min(minJ,j);
                maxI = max(maxI,i);
                maxJ = max(maxJ,j);
            }
        }
    }

    for(int i=minI;i<=maxI;i++){
        for(int j=minJ;j<=maxJ;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }



    return 0;
}
