/*
    PBDS - How to use guide
    
    It works like an ordered set.
    Declaration -> pbds A
    
    Insertion -> A.insert(value)
    Print -> Like other containers using for each loop
    Find kth element (0-based index) -> *A.find_by_order(k)
    Find number of elements smaller than k -> A.order_of_key(k)
    First element >= k in the set -> *A.lower_bound(k)
    First element >k in the set -> *A.upper_bound(k)
    Remove the element k -> A.erase(k)
*/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef tree<pair<ll,ll>, null_type, less<pair<ll,ll>>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    ll a[n], b[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    for(ll i=0;i<n;i++){
        cin>>b[i];
    }

    vector<ll> v;
    pbds A;

    ll ans = 0;

    for(ll i=0;i<n;i++){
        v.push_back(a[i]-b[i]);
        ans += i-A.order_of_key({-v[i],i});
        A.insert({v[i],i});
    }

    cout<<ans;

    return 0;
}
