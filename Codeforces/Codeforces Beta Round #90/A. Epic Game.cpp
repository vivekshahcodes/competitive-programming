#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a, int b){

    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){

    int a,b,n;

    cin>>a>>b>>n;

    bool simon = true;

    int ans = -1;

    while(true){
        if(simon){
            if(gcd(a,n)<=n){
                n -= gcd(a,n);
                simon = false;
            }else{
                ans = 1;
                break;
            }
        }else{
            if(gcd(b,n)<=n){
                n -= gcd(b,n);
                simon = true;
            }else{
                ans = 0;
                break;
            }
        }
    }

    cout<<ans;

    return 0;
}
