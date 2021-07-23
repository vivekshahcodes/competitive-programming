#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string a,b;

    cin>>a>>b;

    int ans = 0;

    for(int i=0;i<n;i++){
        ans+= min(abs(a[i]-b[i]),10-abs(a[i]-b[i]));
    }

    cout<<ans;

    return 0;
}
