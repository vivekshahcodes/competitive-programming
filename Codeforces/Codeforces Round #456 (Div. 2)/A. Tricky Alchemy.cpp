#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ll a,b,x,y,z;

    cin>>a>>b>>x>>y>>z;

    ll totalBlue = y+(3*z);
    ll totalYellow = (2*x)+y;

    cout<<max(0ll,totalBlue-b)+max(0ll,totalYellow-a);

    return 0;
}
