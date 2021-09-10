#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string s,t;

    cin>>s>>t;

    int ans = 0;

    for(int i=0;i<n;i++){
        int a = s[i]-'0';
        int b = t[i]-'0';
        ans += min(abs(a-b),10-abs(a-b));
    }

    cout<<ans;

    return 0;
}
