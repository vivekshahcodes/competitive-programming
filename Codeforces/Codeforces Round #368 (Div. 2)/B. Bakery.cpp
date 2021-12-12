#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){
    return a.second.second<b.second.second;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m,k;

    cin>>n>>m>>k;
    vector<pair<int,pair<int,int>>> v;

    for(int i=0;i<m;i++){

        int a,b,w;
        cin>>a>>b>>w;
        v.push_back({a,{b,w}});
        v.push_back({b,{a,w}});
    }

    sort(v.begin(),v.end(),comp);

    map<int,bool> isSafe;

    for(int i=0;i<k;i++){
        int input;
        cin>>input;
        isSafe[input] = true;
    }

    int ans = -1;

    for(auto i:v){
        int x = i.first;
        int y = i.second.first;

        if(isSafe[x] && !isSafe[y]){
            ans = i.second.second;
            break;
        }
    }

    cout<<ans;

    return 0;
}
