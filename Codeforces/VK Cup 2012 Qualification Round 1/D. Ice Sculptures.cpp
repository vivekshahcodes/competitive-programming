#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void factors(vector<int> &v, int n){

    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if((n/i)!=i){
                v.push_back(n/i);
            }
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> v;

    factors(v,n);

    int ans = INT_MIN;

    for(int i=0;i<v.size();i++){
        if(v[i]<3) continue;
        int d = n/v[i];
        for(int j=0;j<d;j++){
            int curr = 0;
            for(int k=j;k<n;k+=d){
                curr+=a[k];
            }
            ans = max(ans,curr);
        }
    }

    cout<<ans;

    return 0;
}
