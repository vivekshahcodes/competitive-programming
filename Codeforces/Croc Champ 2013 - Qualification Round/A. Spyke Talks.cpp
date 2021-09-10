#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n, ans = 0;

    cin>>n;

    map<int,int> m;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        m[input]++;
    }

    for(auto i:m){
        if(i.second==2 && i.first!=0){
            ans++;
        }else if(i.second>2 && i.first!=0){
            ans = -1;
            break;
        }
    }

    cout<<ans;

    return 0;
}
