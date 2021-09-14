#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int ans = INT_MIN;

    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(b>k){
            ans = max(ans,a-(b-k));
        }else{
            ans = max(ans,a);
        }
    }

    cout<<ans;

    return 0;
}
