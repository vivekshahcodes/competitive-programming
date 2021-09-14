#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    string s;

    cin>>s;

    sort(s.begin(),s.end());

    string ans;

    ans += s.substr(0,1);

    for(int i=1;i<n;i++){
        if(s[i]-ans[ans.length()-1]>=2){
            ans+=s[i];
        }
    }

    if(ans.length()<k){
        cout<<-1;
    }else{
        int fans = 0;
        for(int i=0;i<k;i++){
            fans += ans[i]-96;
        }
        cout<<fans;
    }

    return 0;
}
