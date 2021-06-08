#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string s;

    cin>>s;

    map<string,int> m;

    for(int i=0;i<n-1;i++){
        string c = s.substr(i,2);
        m[c]++;
    }

    int acount = 0;

    string ans;

    for(auto i:m){
        if(i.second>acount){
            acount = i.second;
            ans = i.first;
        }
    }

    cout<<ans;

    return 0;
}
