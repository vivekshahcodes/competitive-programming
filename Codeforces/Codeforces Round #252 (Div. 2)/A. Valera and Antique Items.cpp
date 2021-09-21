#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    vector<int> ans;

    for(int i=0;i<n;i++){

        int q, curr = 0, mi = INT_MAX;
        cin>>q;

        while(q--){

            int x;
            cin>>x;
            mi = min(mi,x);
            
        }

        if(k>mi){
            ans.push_back(i+1);
        }
    }

    cout<<ans.size()<<endl;

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}
