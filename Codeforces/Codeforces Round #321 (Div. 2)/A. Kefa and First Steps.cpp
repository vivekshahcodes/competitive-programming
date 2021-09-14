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

    int ans = 0, curr = 1;

    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            curr++;
            ans = max(ans,curr);
        }else{
            curr = 1;
        }
    }

    cout<<max(ans,1);

    return 0;
}
