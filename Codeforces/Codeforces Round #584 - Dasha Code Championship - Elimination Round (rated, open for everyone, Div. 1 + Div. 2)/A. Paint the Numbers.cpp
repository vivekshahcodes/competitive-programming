#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n);

    bool visited[n];
    memset(visited,false,sizeof(visited));

    int ans = 0;

    for(int i=0;i<n;i++){
        if(!visited[i]){
            ans++;
            for(int j=i+1;j<n;j++){
                if(a[j]%a[i]==0){
                    visited[j] = true;
                }
            }
        }
    }

    cout<<ans;

    return 0;
}
