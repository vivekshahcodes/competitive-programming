#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

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

        v.push_back({0,0});

        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }

        sort(v.begin(),v.end());

        bool flag = true;
        string ans;

        for(int i=1;i<=n;i++){
            int x = v[i].first - v[i-1].first;
            int y = v[i].second - v[i-1].second;

            if(x<0 || y<0){
                flag = false;
                break;
            }

            for(int i=0;i<x;i++){
                ans.push_back('R');
            }

            for(int i=0;i<y;i++){
                ans.push_back('U');
            }
        }

        if(flag){
            cout<<"YES\n"<<ans<<"\n";
        }else{
            cout<<"NO\n";
        }
        
    }

    return 0;
}
