#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void dfs(int i, int a[], int b[], bool visited[], int n){

    visited[i] = true;

    for(int j=0;j<n;j++){
        if(visited[j]) continue;
        if(a[i]==a[j] || b[i]==b[j]){
            dfs(j,a,b,visited,n);
        }
    }

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n],b[n];
    bool visited[n] = {false};
    vector<int> adj[n];

    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }

    int ans = 0;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            dfs(i,a,b,visited,n);
            ans++;
        }
    }

    cout<<ans-1;

    return 0;
}
