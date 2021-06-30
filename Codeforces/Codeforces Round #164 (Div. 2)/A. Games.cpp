#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    map<int,int> a,b;

    for(int i=0;i<n;i++){

        int x,y;
        cin>>x>>y;

        a[x]++;
        b[y]++;

    }

    int ans = 0;

    for(auto i:a){
        ans += i.second*b[i.first];
    }

    cout<<ans;

    return 0;
}
