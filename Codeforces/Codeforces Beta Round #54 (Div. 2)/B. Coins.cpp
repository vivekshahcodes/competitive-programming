#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void factors(vector<int>& v, int n){
    
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=(n/i)){
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

    if(n==1){
        cout<<1;
        return 0;
    }

    vector<int> v;

    factors(v,n);

    sort(v.rbegin(),v.rend());

    vector<int> ans;
    ans.push_back(v[0]);

    for(int i=1;i<v.size();i++){
        if(ans[ans.size()-1]%v[i]==0){
            ans.push_back(v[i]);
        }
    }

    for(int i:ans){
        cout<<i<<" ";
    }

    return 0;
}
