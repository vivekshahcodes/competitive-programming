#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    char a[n+2][n+2];

    memset(a,'x',sizeof(a));

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }

    bool ans = true;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int curr = 0;
            if(a[i][j+1]=='o') curr++;

            if(a[i][j-1]=='o') curr++;
            
            if(a[i-1][j]=='o') curr++;

            if(a[i+1][j]=='o') curr++;

            if(curr&1){
                ans = false;
                break;
            }
        }

        if(!ans){
            break;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
