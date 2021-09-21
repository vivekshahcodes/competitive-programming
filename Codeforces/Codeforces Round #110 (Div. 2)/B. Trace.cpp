#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    double a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n,greater<double>());

    double ans = 0;
    double pi = 3.1415926536;

    for(int i=0;i<n;i+=2){
        if(i==n-1){
            ans += (double)(a[i]*a[i]*pi);
        }else{
            ans += (double)((a[i]*a[i]-a[i+1]*a[i+1])*pi);
        }
    }

    cout<<fixed<<setprecision(10)<<ans;

    return 0;
}
