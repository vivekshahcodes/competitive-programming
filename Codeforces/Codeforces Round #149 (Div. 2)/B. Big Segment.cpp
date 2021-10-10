#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int,int> a, pair<int,int> b){

    if(a.first==b.first){
        return a.second>b.second;
    }

    return a.first<b.first;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    vector<pair<int,int>> v,v2;

    for(int i=0;i<n;i++){

        int a,b;
        cin>>a>>b;

        v.push_back({a,b});
        v2.push_back({a,b});
    }

    sort(v.begin(),v.end(),comp);

    int x = v[0].first;
    int y = v[0].second;

    bool flag = true;

    for(int i=1;i<n;i++){
        if(v[i].second>y){
            flag = false;
            break;
        }
    }

    if(flag){
        for(int i=0;i<v2.size();i++){
            if(v2[i].first==x && v2[i].second==y){
                cout<<i+1;
                break;
            }
        }
    }else{
        cout<<-1;
    }

    return 0;
}
