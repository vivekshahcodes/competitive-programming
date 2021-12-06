#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t,c=1;

    cin>>t;

    while(t--){

        int n,m;

        cin>>n>>m;

        int a[n+1],b[m+1],s[n+1];

        for(int i=1;i<=n;i++){
            cin>>a[i];
            s[i] = a[i];
        }

        sort(s+1,s+n+1);

        for(int i=1;i<=m;i++){
            cin>>b[i];
        }

        sort(b+1,b+m+1);

        int start = b[1], curr = b[1];

        for(int i=2;i<=m;i++){
            if(b[i]-b[i-1]<=1){
                curr = b[i];
            }else{
                sort(a+start,a+curr+2);
                start = b[i];
                curr = b[i];
            }
        }

        sort(a+start,a+curr+2);

        bool ans = true;

        for(int i=1;i<=n;i++){
            if(a[i]!=s[i]){
                ans = false;
                break;
            }
        }

        if(ans){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

        c++;

    }

    return 0;
}
