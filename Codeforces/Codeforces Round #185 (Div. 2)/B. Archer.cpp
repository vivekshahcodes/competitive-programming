#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    double pa = (double)a/b;
    double pna = 1-pa;
    double pnb = 1-((double)c/d);

    double ans = pa/(1-(pna*pnb));

    cout<<fixed<<setprecision(12)<<ans;

    return 0;
}
