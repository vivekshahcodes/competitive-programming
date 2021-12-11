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

    sort(a,a+n);

    for(int i=0;i<m;i++){
        cin>>b[i];
        cout<<upper_bound(a,a+n,b[i])-a<<" ";
    }

    return 0;
}
