#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a,b;

    cin>>a>>b;

    vector<int> ans;
    bool flag = true;

    ans.push_back(b);

    while(b>a){

        ll x = b%10;

        if(x&1 && x!=1){
            flag = false;
            break;
        }

        if(x==1){
            b/=10;
            ans.push_back(b);
        }else{
            b/=2;
            ans.push_back(b);
        }

    }

    if(!flag || b!=a){
        cout<<"NO";
    }else{
        cout<<"YES"<<endl;
        cout<<ans.size()<<endl;
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }
    }

    return 0;
}
