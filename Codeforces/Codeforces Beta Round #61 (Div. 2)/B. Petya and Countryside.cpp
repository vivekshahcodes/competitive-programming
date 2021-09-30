#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = 1;
    
    for(int i=0;i<n;i++){
        int curr = 1;
        int ind = i-1;

        while(ind>=0 && a[ind]<=a[ind+1]){
            curr++;
            ind-=1;
        }

        ind = i+1;

        while(ind<n && a[ind]<=a[ind-1]){
            curr++;
            ind+=1;
        }

        ans = max(ans,curr);
    }

    cout<<ans;

    return 0;
}
