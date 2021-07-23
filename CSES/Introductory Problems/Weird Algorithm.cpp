#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll n;

    cin>>n;

    while(n!=1){

        cout<<n<<" ";

        if(n&1){
            n*=3;
            n++;
        }else{
            n/=2;
        }
    }

    cout<<1;

    return 0;
}
