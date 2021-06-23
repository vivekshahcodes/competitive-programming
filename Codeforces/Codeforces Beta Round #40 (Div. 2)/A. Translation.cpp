#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s,t;

    cin>>s>>t;
    
    reverse(s.begin(),s.end());

    if(t==s){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
