#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    map<int,int> m;

    for(int i=0;i<n;i++){
        
        int input;
        cin>>input;
        m[input] = i;

    }

    vector<pair<int,int>> v;

    for(auto i:m){
        v.push_back({i.second,i.first});
    }

    sort(v.begin(),v.end());

    cout<<v.size()<<endl;

    for(auto i:v){
        cout<<i.second<<" ";
    }

    return 0;
}
