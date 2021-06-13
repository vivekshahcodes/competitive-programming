#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,ans=0;

    cin>>n;

    string s;

    cin>>s;

    while(s.find("xxx") != string::npos){
        s[s.find("xxx")] = 'a';
        ans++;
    }

    cout<<ans;



    return 0;
}
