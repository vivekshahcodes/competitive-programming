#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int k;

    cin>>k;

    int a[26];
    int m = 0, ans = 0;

    for(int i=0;i<26;i++){
        cin>>a[i];
        m = max(a[i],m);
    }

    for(int i=0;i<s.length();i++){
        ans += (i+1) * a[(s[i]-'a')];
    }

    for(int i=s.length();i<s.length()+k;i++){
        ans += (i+1) * m;
    }

    cout<<ans;

    return 0;
}
