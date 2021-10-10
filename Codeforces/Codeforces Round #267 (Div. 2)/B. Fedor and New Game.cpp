#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,k;

    cin>>n>>m>>k;

    int a[m];

    for(int i=0;i<m;i++){
        cin>>a[i];
    }

    int x;

    cin>>x;

    int ans = 0;

    for(int i=0;i<m;i++){

        int y = (x^a[i]);

        int temp = 0;

        for(int i=0;i<n;i++){
            temp += y&1;
            y = y>>1;
        }

        if(temp<=k){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
