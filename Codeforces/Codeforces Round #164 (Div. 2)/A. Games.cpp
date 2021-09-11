#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    map<int,int> a,b;

    int ans = 0;

    for(int i=0;i<n;i++){

        int x,y;

        cin>>x>>y;

        a[x]++;
        b[y]++;

        ans += b[x] + a[y];

    }

    cout<<ans;

    return 0;
}
