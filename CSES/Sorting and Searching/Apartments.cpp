#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,k;
    cin>>n>>m>>k;
    int ans = 0;

    int a[n],b[m];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a,a+n);
    sort(b,b+m);

    int curr = 0;

    for(int i=0;i<n;i++){
        if(curr<m){
            if(abs(a[i]-b[curr])<=k){
                ans++;
                curr++;
            }else if(a[i]>b[curr]){
                i--;
                curr++;
            }
        }
    }

    cout<<ans;

    return 0;
}
