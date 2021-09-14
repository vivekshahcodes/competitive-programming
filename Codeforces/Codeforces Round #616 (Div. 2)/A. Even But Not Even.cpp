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

        string ans;

        for(int i=0;i<n;i++){
            if((s[i]-'0') & 1){
                ans+=s[i];
            }
            if(ans.length()==2){
                break;
            }
        }

        if(ans.length()==2){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
