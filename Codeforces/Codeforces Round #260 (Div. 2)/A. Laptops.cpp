#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

    sort(v.begin(),v.end());

    bool alex = false;

    for(int i=0;i<v.size()-1;i++){
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second){
            alex = true;
            break;
        }
    }

    if(alex){
        cout<<"Happy Alex";
    }else{
        cout<<"Poor Alex";
    }

    return 0;
}
