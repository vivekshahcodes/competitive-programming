#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;
    
    cin>>n;
    
    int a[n];

    map<int,int> m;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    int ans = 1;

    for(auto i:m){
        ans = max(i.second,ans);
    }

    cout<<ans;  

    return 0;
}
