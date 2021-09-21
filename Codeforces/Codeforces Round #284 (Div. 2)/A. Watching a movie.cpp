#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int curr = 1, ans = 0;

    for(int i=0;i<n;i++){

        int l,r;

        cin>>l>>r;

        while(curr+k<=l){
            curr+=k;
        }

        if(curr==l){
            ans+=r-l+1;
            curr = r+1;
        }else{
            ans += r-curr+1;
            curr = r+1;
        }
    }

    cout<<ans;

    return 0;
}
