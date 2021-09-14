#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int ans = n;

    int x = n/10, y = n%10;

    ans = max(x,ans);

    int z;

    x/=10;

    cout<<max(ans,(x*10)+y);

    return 0;
}
