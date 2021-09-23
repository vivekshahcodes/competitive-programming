#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int,int> a, pair<int,int> b){

    if(a.first==b.first){
        return a.second<b.second;
    }

    return a.first>b.first;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){

        int a,b;
        cin>>a>>b;
        v.push_back({a,b});

    }

    sort(v.begin(),v.end(),comp);

    int ans = 0;

    int x = v[k-1].first;
    int y = v[k-1].second;

    for(auto i:v){
        if(i.first==x && i.second==y){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
