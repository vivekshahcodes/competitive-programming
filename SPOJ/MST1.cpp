#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int dp[20000015] = {0};

int minStepsToOne(int n){

    if(n==1){
        return 0;
    }

    if(dp[n] != 0){
        return dp[n];
    }

    int a,b,c;
    a = b = c = INT_MAX;

    if(n%3==0){
        a = minStepsToOne(n/3) + 1;
    }

    if(n%2==0){
        b = minStepsToOne(n/2) + 1;
    }

    c = minStepsToOne(n-1) + 1;

    return dp[n] = min(min(a,b),c);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, c = 1;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        cout<<"Case "<<c<<": "<<minStepsToOne(n)<<endl;

        c++;

    }

    return 0;
}
