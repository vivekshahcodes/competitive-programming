#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string s;

    cin>>s;

    set<char> c;

    for(int i=0;i<n;i++){
        c.insert(tolower(s[i]));
    }

    if(c.size()==26){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    return 0;
}
