#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int ans = 1, curr = 1;

    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            curr++;
            ans = max(ans,curr);
        }else{
            ans = max(ans,curr);
            curr = 1;
        }
    }

    cout<<ans;

    return 0;
}
