#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    string a,b;
    cin>>a>>b;

    int ans = 0;

    for(int i=0;i<n-1;i++){
        if(a[i]!=b[i]){
            if(a[i+1]!=b[i+1]){
                swap(a[i],a[i+1]);
                ans++;
            }else{
                a[i] ^= 1;
                ans++;
            }
        }
    }

    if(a[n-1]!=b[n-1]){
        ans++;
    }

    cout<<ans;

    return 0;
}
