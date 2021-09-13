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

    int ans = n;

    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            ans = i+1;
            break;
        }
    }

    cout<<ans;

    return 0;
}
