#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = 1, curr = 1;

    for(int i=0;i<n-1;i++){
        if(a[i+1]>a[i]){
            curr++;
            ans = max(ans,curr);
        }else{
            curr = 1;
        }
    }

    cout<<ans;

    return 0;
}
