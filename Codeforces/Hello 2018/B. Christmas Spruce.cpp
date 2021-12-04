#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<int,int> m;
    vector<int> adj[n+1];
    
    for(int i=2;i<=n;i++){
        int input;
        cin>>input;
        m[input]++;
        adj[input].push_back(i);
    }

    bool ans = true;

    for(int i=1;i<=n;i++){

        if(m[i]==0){
            continue;
        }

        for(auto x:adj[i]){
            if(m[x]){
                m[i]--;
            }
        }

        if(m[i]<3){
            ans = false;
            break;
        }

    }

    if(ans){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
