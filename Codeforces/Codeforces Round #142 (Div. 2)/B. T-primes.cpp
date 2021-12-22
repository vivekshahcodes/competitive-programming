#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPrime(ll n){

    if(n<=1){
        return false;
    }

    for(ll i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    for(ll i=0;i<n;i++){

        ll input;
        cin>>input;

        ll l = 1, r = 1000000;
        bool flag = false;

        while(l<=r){

            ll m = l + (r-l)/2;

            if(m*m==input){
                if(isPrime(m)){
                    flag = true;
                }
                break;
            }

            if(m*m<input){
                l = m+1;
            }else{
                r = m-1;
            }
        }

        if(flag){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }

    return 0;
}
