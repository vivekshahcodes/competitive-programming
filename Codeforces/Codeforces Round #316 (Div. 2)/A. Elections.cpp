#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    map<int,int> v;

    for(int i=0;i<m;i++){
        int ind = -1, ma = -1;
        for(int j=0;j<n;j++){
            int input;
            cin>>input;
            if(input>ma){
                ma = input;
                ind = j+1;
            }
        }
        v[ind]++;
    }

    int ans = - 1, best = -1;

    for(auto i:v){
        if(i.second>best){
            best = i.second;
            ans = i.first;
        }
    }

    cout<<ans;

    return 0;
}
