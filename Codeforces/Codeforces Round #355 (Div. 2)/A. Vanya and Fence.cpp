#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,h;

    cin>>n>>h;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int ans = 0;

    for(int i=0;i<n;i++){
        if(a[i]>h){
            ans+=2;
        }else{
            ans++;
        }
    }

    cout<<ans;

    return 0;
}
