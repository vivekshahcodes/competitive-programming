#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int a[n],b[n];
    int total = 0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        total += a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
        if(b[i]==0){
            total -= a[i];
        }
    }

    int l = 0, r = k-1, curr = 0, ans = 0;

    for(int i=l;i<=r;i++){
        if(b[i]==0){
            curr += a[i];
            ans = max(curr,ans);
        }
    }

    while(r<n){

        if(b[l]==0){
            curr -= a[l];
        }

        l++;
        r++;

        if(r==n){
            break;
        }

        if(b[r]==0){
            curr += a[r];
        }

        ans = max(ans,curr);
    }    

    cout<<total+ans;

    return 0;
}
