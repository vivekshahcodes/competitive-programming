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

        bool flag = false;
        
        int ans;

        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])>=2){
                flag = true;
                ans = i+1;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
            cout<<ans<<" "<<ans+1<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
