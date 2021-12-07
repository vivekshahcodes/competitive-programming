#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    map<int,pair<int,int>> m;

    for(int i=0;i<k;i++){

        int l,r,t,c;

        cin>>l>>r>>t>>c;

        for(int j=l;j<=r;j++){
            if(m[j].first==0){
                m[j].first = t;
                m[j].second = c;
            }else{
                if(t<m[j].first){
                    m[j].first = t;
                    m[j].second = c;
                }
            }
        }
    }

    int ans = 0;

    for(auto i:m){
        ans += i.second.second;
    }

    cout<<ans;

    return 0;
}
