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

typedef tree<pair<int,int>, null_type, less<pair<int,int>>, rb_tree_tag, tree_order_statistics_node_update> pbds;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    pbds A;

    for(int i=0;i<n;i++){
        
        int input;
        cin>>input;

        A.insert({input,i});
    }

    int q;

    cin>>q;

    while(q--){

        int x;

        cin>>x;

        cout<<A.order_of_key({x,INT_MAX})<<endl;
    }

    return 0;
}
