#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    vector<bool> visited(n,false);

    int ans = 0;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            int curr = 0;
            for(int j=i;j<n;j++){
                if(curr<=v[j] && !visited[j]){
                    visited[j] = true;
                    curr++;
                }
            }
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
