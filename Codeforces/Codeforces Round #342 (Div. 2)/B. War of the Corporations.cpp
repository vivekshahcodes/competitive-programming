#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b;
    cin>>a>>b;

    int ans = 0;

    int n = (a.length()-b.length());

    for(int i=0;i<max((n+1),0);i++){
        if(a.substr(i,b.length())==b){
            a[i+b.length()-1] = '#';
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
