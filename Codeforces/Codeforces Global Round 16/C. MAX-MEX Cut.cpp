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

        string a,b;

        cin>>a>>b;

        vector<int> v(n);

        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                v[i] = 2;
            }else if(a[i]=='1'){
                v[i] = 0;
            }else{
                v[i] = 1;
            }
        }

        int ans = 0;

        for(int i=0;i<n;i++){

            if(i==0){
                if(i+1<n && v[i]+v[i+1]==1){
                    ans += 2;
                    v[0] = 100;
                    v[1] = 100;
                }else{
                    ans += v[i];
                }
                continue;
            }

            if(i==n-1){
                if(i-1>=0 && v[i]+v[i-1]==1){
                    ans += 2;
                }else{
                    if(v[i]<=2){
                        ans += v[i];
                    }
                }
                break;
            }

            if(v[i]==100){
                continue;
            }else if(v[i]==2){
                ans += 2;
            }else{
                if(v[i]+v[i-1]==1){
                    ans += 2;
                    v[i] = 100;
                    v[i-1] = 100;
                }else if(v[i]+v[i+1]==1){
                    ans += 2;
                    v[i] = 100;
                    v[i+1] = 100;
                }else{
                    ans += v[i];
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
