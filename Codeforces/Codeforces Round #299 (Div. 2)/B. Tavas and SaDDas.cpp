#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int precalc(int n){

    int ans = 0;

    for(int i=1;i<=n;i++){
        ans += pow(2,i);
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;

    int n = s.length();

    int ans = precalc(n-1);

    int x = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='7'){
            x += pow(2,n-i-1);
        }
    }

    cout<<ans+x+1;

    return 0;
}
