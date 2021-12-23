#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

unordered_map<int,int> m;

bool comp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b){

    if(m[a.second.first]==m[b.second.first]){
        return m[a.second.second]>m[b.second.second];
    }

    return m[a.second.first]>m[b.second.first];
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
        m[a[i]]++;
    }
    
    int x;
    cin>>x;

    int b[x],c[x];

    for(int i=0;i<x;i++){
        cin>>b[i];
    }

    for(int i=0;i<x;i++){
        cin>>c[i];
    }

    vector<pair<int,pair<int,int>>> v;

    for(int i=0;i<x;i++){
        v.push_back({i+1,{b[i],c[i]}});
    }

    sort(v.begin(),v.end(),comp);

    cout<<v[0].first;

    return 0;
}
