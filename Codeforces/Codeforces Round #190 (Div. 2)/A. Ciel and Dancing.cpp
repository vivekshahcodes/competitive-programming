#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    map<int,int> a,b;
    vector<pair<int,int>> ans;

    int i=1,j=1;

    while(i<=n && j<=m){
        ans.push_back({i,j});
        a[i]++;
        b[j]++;

        if(a[i]>=2){
            i++;
        }else if(b[j]>=2){
            j++;
        }else if(n>=m){
            i++;
        }else{
            j++;
        }
    }

    i = ans[ans.size()-1].first;
    j = ans[ans.size()-1].second;
    i++;
    j++;

    while(i<=n){
        ans.push_back({i,j-1});
        i++;
    }

    while(j<=m){
        ans.push_back({i-1,j});
        j++;
    }

    cout<<ans.size()<<endl;
    for(auto i:ans){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}
