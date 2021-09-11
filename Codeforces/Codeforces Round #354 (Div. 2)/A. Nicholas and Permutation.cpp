#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n+1];

    int minInd, maxInd;

    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1){
            minInd = i;
        }
        if(a[i]==n){
            maxInd = i;
        }
    }

    int diff = abs(minInd-maxInd), ans;

    if(minInd<maxInd){
        ans = max(diff+minInd-1,diff+n-maxInd);
    }else{
        ans = max(diff+maxInd-1,diff+n-minInd);
    }

    cout<<ans;

    return 0;
}
