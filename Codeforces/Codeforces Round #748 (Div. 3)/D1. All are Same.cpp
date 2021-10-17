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

        int a[n], m = INT_MAX;

        for(int i=0;i<n;i++){
            cin>>a[i];
            m = min(m,a[i]);
        }

        int ans = 0;

        for(int i=0;i<n;i++){
            ans = __gcd(ans,a[i]-m);
        }

        if(ans==0){
            cout<<-1<<"\n";
        }else{
            cout<<ans<<"\n";
        }
    }

    return 0;
}
