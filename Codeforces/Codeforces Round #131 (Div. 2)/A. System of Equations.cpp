#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m;

    cin>>n>>m;

    int ans = 0;

    for(int i=0;i<=40;i++){
        for(int j=0;j<=40;j++){
            if((i*i)+j==n && i+(j*j)==m){
                ans++;
            }
        }
    }

    cout<<ans;

    return 0;
}
