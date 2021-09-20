#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s,t;

    cin>>s>>t;

    if(s==t){
        cout<<-1;
    }else{
        cout<<max(s.length(),t.length());
    }

    return 0;
}
