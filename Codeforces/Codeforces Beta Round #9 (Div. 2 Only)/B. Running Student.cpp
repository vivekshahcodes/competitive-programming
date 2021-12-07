#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,vb,vs;

    cin>>n>>vb>>vs;

    double a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    double ux,uy;

    cin>>ux>>uy;

    double m = INT_MAX;
    int ans;

    for(int i=1;i<n;i++){
        double t1 = a[i]/vb;
        double t2 = sqrt((ux-a[i])*(ux-a[i])+(uy*uy))/vs;
        double t = t1+t2;

        if(t<=m){
            m = t;
            ans = i+1;
        }
    }

    cout<<ans;

    return 0;
}
