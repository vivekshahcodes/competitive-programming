#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

vector<ll> v;

void superLucky(ll curr, ll four, ll seven){

    if(curr>1e10) return;

    if(four==seven){
        v.push_back(curr);
    }

    superLucky(curr*10+4,four+1,seven);
    superLucky(curr*10+7,four,seven+1);

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    superLucky(0,0,0);

    sort(v.begin(),v.end());

    cout<<v[lower_bound(v.begin(),v.end(),n)-v.begin()];

    return 0;
}
