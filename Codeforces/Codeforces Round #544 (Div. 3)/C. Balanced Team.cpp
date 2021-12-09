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

    if(n==1){
        cout<<1;
        return 0;
    }

    sort(a,a+n);

    int i=0,j=1,ans=1,curr=1;

    while(j<n){

        if(a[j]-a[i]<=5){
            curr++;
            ans = max(ans,curr);
            j++;
        }else{
            curr--;
            i++;
        }
    }

    cout<<ans;

    return 0;
}
