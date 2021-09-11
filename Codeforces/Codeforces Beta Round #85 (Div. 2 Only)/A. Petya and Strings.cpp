#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s,t;

    cin>>s>>t;

    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(t.begin(),t.end(),t.begin(),::tolower);

    if(s<t){
        cout<<-1;
    }else if(s>t){
        cout<<1;
    }else{
        cout<<0;
    }

    return 0;
}
