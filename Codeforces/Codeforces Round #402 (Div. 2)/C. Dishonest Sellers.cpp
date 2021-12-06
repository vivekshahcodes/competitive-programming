#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int,int> a, pair<int,int> b){
    return a.second-a.first>b.second-b.first;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        v.push_back({a[i],b[i]});
    }

    sort(v.begin(),v.end(),comp);

    int ans = 0;

    for(int i=0;i<k;i++){
        ans += v[i].first;
    }

    int i = k-1;

    for(i=k;i<n;i++){
        if(v[i].first<v[i].second){
            ans += v[i].first;
        }else{
            break;
        }
    }

    for(;i<n;i++){
        ans += v[i].second;
    }

    cout<<ans;

    return 0;
}
