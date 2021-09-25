#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;

    cin>>a>>b>>c;

    cout<<(sqrt((a*b)/c)+sqrt((a*c)/b)+sqrt((b*c)/a))*4;

    return 0;
}
