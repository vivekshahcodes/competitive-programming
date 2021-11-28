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

        map<char,int> m;

        for(int i=0;i<26;i++){
            m[s[i]] = i+1;
        }

        string str;
        cin>>str;

        int ans = 0;

        for(int i=0;i<str.length()-1;i++){
            ans += abs(m[str[i+1]]-m[str[i]]);
        }

        cout<<ans<<endl;
    }

    return 0;
}
