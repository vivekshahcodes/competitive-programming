#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m;

    cin>>n>>m;

    int minRow = INT_MAX,minCol=INT_MAX,maxRow=0,maxCol=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            char a;
            cin>>a;
            if(a=='B'){
                minRow = min(i,minRow);
                minCol = min(j,minCol);
                maxRow = max(i,maxRow);
                maxCol = max(j,maxCol);
            }
        }
    }

    cout<<(minRow+maxRow)/2<<" "<<(minCol+maxCol)/2;

    return 0;
}
