#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    int ans = 0;

    for(int i=0;i<k;i++){
        if(a[i]<0){
            ans+=-1*a[i];
        }else{
            break;
        }
    }

    cout<<ans;

    return 0;
}
