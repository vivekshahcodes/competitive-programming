#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    int ans = 0;
    char curr = 'a';

    for(int i=0;i<s.length();i++){
        int a = abs(s[i]-curr);
        ans += min(a,26-a);
        curr = s[i];
    }

    cout<<ans;

    return 0;
}
