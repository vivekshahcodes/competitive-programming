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

        int n,m,k;

        cin>>n>>m>>k;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        bool flag = true;

        for(int i=0;i<n-1;i++){
            int x = max(a[i+1]-k,0);
            if(a[i]>=x){
                m += a[i]-x;
            }else{
                int y = x-a[i];
                if(m>=y){
                    m -= y;
                }else{
                    flag = false;
                    break;
                }
            }
        }

        string ans = flag?"YES":"NO";

        cout<<ans<<endl;
    }

    return 0;
}
