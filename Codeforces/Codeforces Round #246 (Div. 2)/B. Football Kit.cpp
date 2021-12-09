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
    int a[n+1];

    for(int i=1;i<=n;i++){
        int x;
        cin>>x>>a[i];
        m[x]++;
    }

    for(int i=1;i<=n;i++){
        int x = n-1 + m[a[i]];
        cout<<x<<" "<<((n-1)*2)-x<<endl;
    }

    return 0;
}
