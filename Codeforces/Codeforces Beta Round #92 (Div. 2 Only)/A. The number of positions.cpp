#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,a,b;

    cin>>n>>a>>b;

    cout<<min(n-a,b+1);

    return 0;
}
