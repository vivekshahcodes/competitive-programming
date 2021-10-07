#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<int,bool> m;

    string s;

    cin>>s;

    m[-1] = true;

    bool ans = true;

    for(int i=0;i<s.length();i++){
        if(m[(s[i]-'a')-1]){
            m[s[i]-'a'] = true;
        }else{
            ans = false;
            break;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
