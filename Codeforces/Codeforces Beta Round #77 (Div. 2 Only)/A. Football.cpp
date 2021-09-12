#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    int n = s.length(), ans = 1, curr = 1;

    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            curr++;
            ans = max(ans,curr);
        }else{
            curr = 1;
        }
    }

    if(ans>=7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
