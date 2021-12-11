#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;

    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;

        if(input==1){
            v.push_back(i);
        }
    }

    if(v.size()==0){
        cout<<0;
    }else if(v.size()==1){
        cout<<1;
    }else{
        ll ans = 1;
        for(int i=1;i<v.size();i++){
            ans *= (v[i]-v[i-1]);
        }
        cout<<ans;
    }

    return 0;
}
