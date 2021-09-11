#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int ans = 0, n = s.length();
    char curr = 'a';

    for(int i=0;i<n;i++){
        ans += min(abs(s[i]-curr),26-abs(s[i]-curr));
        curr = s[i];
    }

    cout<<ans;

    return 0;
}
