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

        int a[n+1];

        map<int,int> m;
        int ans = INT_MAX;

        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(m[a[i]]!=0){
                ans = min(ans,i-m[a[i]]+1);
            }
            m[a[i]] = i;
        }

        if(ans==INT_MAX){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }
    }

    return 0;
}
