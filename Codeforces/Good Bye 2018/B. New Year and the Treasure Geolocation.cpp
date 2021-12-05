#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin>>n;

    n*=2;

    vector<pair<int,int>> v;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }

    sort(v.begin(),v.end());

    if(n==1){
        cout<<v[0].first<<" "<<v[0].second;
    }else{
        cout<<v[0].first+v[n-1].first<<" "<<v[0].second+v[n-1].second;
    }

    return 0;
}
