#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    int a[n],b[m];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    sort(a,a+n,greater<int>());
    sort(b,b+m);

    int ans = max(a[0],2*a[n-1]);

    if(ans<b[0]){
        cout<<ans;
    }else{
        cout<<-1;
    }

    return 0;
}
