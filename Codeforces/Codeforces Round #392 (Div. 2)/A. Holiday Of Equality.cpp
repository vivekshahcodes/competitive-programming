#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n, m = 0, ans = 0;
    
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        m = max(a[i],m);
    }

    for(int i=0;i<n;i++){
        ans += m-a[i];
    }

    cout<<ans;

    return 0;
}
