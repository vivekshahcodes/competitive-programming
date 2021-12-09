#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    double l;

    cin>>n>>l;

    double a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    double maxDist = 0;

    for(int i=0;i<n-1;i++){
        maxDist = max(maxDist,a[i+1]-a[i]);
    }

    double minReq = max(a[0],l-a[n-1]);

    cout<<fixed<<setprecision(10)<<max(minReq,maxDist/2);

    return 0;
}
