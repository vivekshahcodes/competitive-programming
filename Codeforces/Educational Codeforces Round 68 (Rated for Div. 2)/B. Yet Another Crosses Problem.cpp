#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int n,m;

        cin>>n>>m;

        char a[n][m];
        vector<int> r,c;

        for(int i=0;i<n;i++){
            int curr = 0;
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]=='.'){
                    curr++;
                }
            }
            r.push_back(curr);
        }

        for(int j=0;j<m;j++){
            int curr = 0;
            for(int i=0;i<n;i++){
                if(a[i][j]=='.'){
                    curr++;
                }
            }
            c.push_back(curr);
        }

        int ans = INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]=='.'){
                    ans = min(ans,r[i]+c[j]-1);
                }else{
                    ans = min(ans,r[i]+c[j]);
                }
            }
        }

        cout<<ans<<"\n";

    }

    return 0;
}
