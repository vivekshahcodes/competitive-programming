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

        int n;

        cin>>n;

        int a[n+1], ans = 0;

        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        for(int i=1;i<=n;i++){
            int curr = a[i];

            for(int next = curr; next <= 2*n; next += curr){

                int ele = next/curr;

                int j = a[i]*ele - i;

                if(j<i){
                    continue;
                }

                if(j<=n && a[j]==ele && a[i]!=a[j]){
                    ans++;
                }
                
            }
        }

        cout<<ans<<"\n";
    }

    return 0;
}
