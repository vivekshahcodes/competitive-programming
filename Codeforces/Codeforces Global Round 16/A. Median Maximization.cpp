#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        ll n,k;

        cin>>n>>k;

        cout<<k/((n/2)+1)<<endl;
    }

    return 0;
}
