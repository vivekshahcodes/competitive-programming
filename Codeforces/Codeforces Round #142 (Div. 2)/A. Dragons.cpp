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

    int s,n;

    cin>>s>>n;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){

        int x,y;
        cin>>x>>y;

        v.push_back({x,y});

    }

    sort(v.begin(),v.end(),comp);

    bool ans = true;

    for(auto i:v){
        
        if(s>i.first){
            s+=i.second;
        }else{
            ans = false;
            break;
        }
    }

    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    

    return 0;
}
