#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;

    cin>>a>>b>>c;

    int x = (a*c + (b-1))/b;

    cout<<max(x-c,0);

    return 0;
}
