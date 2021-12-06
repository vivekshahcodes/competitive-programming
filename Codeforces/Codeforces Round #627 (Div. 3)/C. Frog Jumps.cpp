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

        int ans = 0, curr = 0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='L'){
                curr++;
                ans = max(ans,curr);
            }else{
                curr = 0;
            }
        }

        int r = s.length()+1;

        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='R'){
                r = i+1;
            }
        }

        cout<<max(r,ans+1)<<endl;
    }

    return 0;
}
