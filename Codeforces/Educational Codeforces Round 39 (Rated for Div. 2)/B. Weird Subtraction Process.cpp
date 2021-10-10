#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;

    cin>>a>>b;

    while(a!=0 && b!=0){

        if(a*2<=b){
            ll x = b/(a*2);
            b -= a*2*x;
        }else if(b*2<=a){
            ll x = a/(b*2);
            a -= b*2*x;
        }else{
            break;
        }
    }

    cout<<a<<" "<<b;

    return 0;
}
