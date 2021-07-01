#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string a,b,c;

    cin>>a>>b>>c;

    map<char,int> m;

    for(int i=0;i<a.length();i++){
        m[a[i]]++;
    }

    for(int i=0;i<b.length();i++){
        m[b[i]]++;
    }

    for(int i=0;i<c.length();i++){
        m[c[i]]--;
    }

    for(auto i:m){
        if(i.second!=0){
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";
    
    return 0;
}
