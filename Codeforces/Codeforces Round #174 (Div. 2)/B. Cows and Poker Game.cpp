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

    map<char,int> m;

    for(int i=0;i<n;i++){
        m[s[i]]++;
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        if(s[i]!='F'){
            m[s[i]]--;
            if(m['I']==0){
                ans++;
            }
            m[s[i]]++;
        }
    }

    cout<<ans;

    return 0;
}
