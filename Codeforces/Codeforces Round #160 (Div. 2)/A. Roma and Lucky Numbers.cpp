#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int luckyDigits(int n){
    
    int ans = 0;

    while(n>0){
        if(n%10==4 || n%10==7){
            ans++;
        }
        n/=10;
    }

    return ans;
}

int main(){

    int n,k;

    cin>>n>>k;

    int ans = 0;

    for(int i=1;i<=n;i++){
        
        int input;
        cin>>input;

        if(luckyDigits(input)<=k){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
