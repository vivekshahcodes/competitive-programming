#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string s;

    cin>>s;

    int ans = 0;

    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
