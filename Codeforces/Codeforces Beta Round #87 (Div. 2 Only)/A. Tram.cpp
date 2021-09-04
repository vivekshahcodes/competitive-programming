#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int ans = 0, curr = 0;

    for(int i=0;i<n;i++){
        
        int a,b;

        cin>>a>>b;

        curr -= a;
        curr += b;

        ans = max(curr,ans);

    }

    cout<<ans;

    return 0;
    
}
