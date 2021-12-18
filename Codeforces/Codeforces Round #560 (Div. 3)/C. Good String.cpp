#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    string s;

    cin>>s;

    string final;
    final.push_back(s[0]);
    int ans = 0;

    for(int i=1;i<n;i++){
        int x = final.length();
        if(x&1){
            if(final[x-1]!=s[i]){
                final.push_back(s[i]);
            }else{
                ans++;
            }
        }else{
            final.push_back(s[i]);
        }
    }

    if(final.length()&1){
        ans++;
        cout<<ans<<"\n";
        for(int i=0;i<final.length()-1;i++){
            cout<<final[i];
        }
    }else{
        cout<<ans<<"\n";
        cout<<final;
    }

    return 0;
}
