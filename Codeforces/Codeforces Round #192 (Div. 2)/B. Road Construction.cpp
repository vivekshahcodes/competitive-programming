#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    map<int,int> a;

    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x]++;
        a[y]++;
    }

    int node = 1;

    for(int i=1;i<=n;i++){
        if(a[i]==0){
            node = i;
            break;
        }
    }

    cout<<n-1<<"\n";

    for(int i=1;i<=n;i++){
        if(i!=node){
            cout<<node<<" "<<i<<"\n";
        }
    }

    return 0;
}
