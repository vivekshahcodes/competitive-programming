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

    unordered_map<char,int> m;

    int ans = 0;

    for(int i=0;i<s.length();i++){
        if(i&1){
            if(m[tolower(s[i])]==0){
                ans++;
            }else{
                m[tolower(s[i])]--;
            }
        }else{
            m[s[i]]++;
        }
    }

    cout<<ans;

    return 0;
}
