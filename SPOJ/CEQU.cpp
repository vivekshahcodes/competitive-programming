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

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t, tc = 1;

    cin>>t;

    while(t--){

        int a,b,c;

        cin>>a>>b>>c;

        if(c%gcd(a,b)==0){
            cout<<"Case "<<tc<<": "<<"Yes"<<endl;
        }else{
            cout<<"Case "<<tc<<": "<<"No"<<endl;
        }

        tc++;

    }

    return 0;
}
