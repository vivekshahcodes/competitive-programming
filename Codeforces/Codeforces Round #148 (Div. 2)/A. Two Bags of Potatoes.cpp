#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int y,k,n;

    cin>>y>>k>>n;

    int curr;

    if(k>y){
        curr = k-y; 
    }else if(k==y){
        curr = y;
    }else if(y%k==0){
        curr = k;
    }else{
        int a = y%k;
        int b = k-y%k;

        if((y+min(a,b))%k==0){
            curr = min(a,b);
        }else{
            curr = max(a,b);
        }
    }

    vector<int> ans;

    while(y+curr<=n){
        ans.push_back(curr);
        curr+=k;
    }

    if(ans.size()==0){
        cout<<-1;
    }else{
        for(int i:ans){
            cout<<i<<" ";
        }
    }

    return 0;
}
