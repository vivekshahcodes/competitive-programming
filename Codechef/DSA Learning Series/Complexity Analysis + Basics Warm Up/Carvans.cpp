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

        int a[n];
        
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int ans = 0, m = INT_MAX;

        for(int i=0;i<n;i++){
            if(a[i]<=m){
                m = a[i];
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
