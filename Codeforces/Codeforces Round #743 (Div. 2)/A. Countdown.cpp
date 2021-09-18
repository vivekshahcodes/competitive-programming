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

        string s;

        cin>>s;

        int ans = 0;

        for(int i=0;i<n;i++){
            if(i!=n-1 && (s[i]-'0')>0){
                ans+=s[i]-'0';
                ans++;
            }else if(i==n-1){
                ans+=s[i]-'0';
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
