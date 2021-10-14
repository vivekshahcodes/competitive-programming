#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a,b;

    cin>>n>>a>>b;

    string s;

    cin>>s;

    if(s[a-1]==s[b-1]){
        cout<<0;
    }else{
        cout<<1;
    }

    return 0;
}
