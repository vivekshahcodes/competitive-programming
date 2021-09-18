#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second<b.second;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<pair<int,int>> v;
    map<pair<int,int>,int> m;

    for(int i=0;i<n;i++){

        int x,y;

        cin>>x>>y;

        v.push_back({x,y});
    }

    sort(v.begin(),v.end());

    for(int i=1;i<v.size()-1;i++){
        if(v[i-1].first==v[i].first && v[i+1].first==v[i].first){
            m[v[i]]++;
        }
    }

    sort(v.begin(),v.end(),comp);

    for(int i=1;i<v.size()-1;i++){
        if(v[i-1].second==v[i].second && v[i+1].second==v[i].second){
            m[v[i]]++;
        }
    }

    int ans = 0;

    for(auto i:m){
        if(i.second==2){
            ans++;
        }
    }    

    cout<<ans;

    return 0;
}
