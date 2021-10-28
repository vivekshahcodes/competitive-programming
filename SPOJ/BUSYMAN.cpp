#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool comp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;

            v.push_back({a,b});
        }

        sort(v.begin(),v.end(),comp);

        int ans = 0;
        int prev = 0;

        for(int i=0;i<n;i++){
            if(v[i].first>=prev){
                ans++;
                prev = v[i].second;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
