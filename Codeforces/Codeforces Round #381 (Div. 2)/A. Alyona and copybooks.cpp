#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,a,b,c;

    cin>>n>>a>>b>>c;

    if(n%4==0){
        cout<<0;
    }else if(n%4==1){
        cout<<min(min(a*3,a+b),c);
    }else if(n%4==2){
        cout<<min(min(a*2,b),c*2);
    }else{
        cout<<min(min(a,b+c),c*3);
    }

    return 0;
}
