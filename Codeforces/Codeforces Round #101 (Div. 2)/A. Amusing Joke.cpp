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

    bool flag = true;

    for(auto i:m){
        if(i.second!=0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
