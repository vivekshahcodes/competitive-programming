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

        string s;

        cin>>s;

        int ans = INT_MAX, n = s.length();

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(s[i]=='0' && s[j]=='0'){
                    ans = min(ans,(n-1-j)+(j-i-1));
                }else if(s[i]=='2' && s[j]=='5'){
                    ans = min(ans,(n-1-j)+(j-i-1));
                }else if(s[i]=='5' && s[j]=='0'){
                    ans = min(ans,(n-1-j)+(j-i-1));
                }else if(s[i]=='7' && s[j]=='5'){
                    ans = min(ans,(n-1-j)+(j-i-1));
                }
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
