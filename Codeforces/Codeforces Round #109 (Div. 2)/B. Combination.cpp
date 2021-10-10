#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int,int> a, pair<int,int> b){

    if(a.second==b.second){
        return a.first>b.first;
    }

    return a.second>b.second;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end(),comp);

    int counter = 1, ans = 0;

    for(int i=0;i<v.size();i++){
        counter--;
        ans += v[i].first;
        counter += v[i].second;
        if(counter==0){
            break;
        }
    }

    cout<<ans;

    return 0;
}
