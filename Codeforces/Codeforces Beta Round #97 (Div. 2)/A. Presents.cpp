#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int a[n+1];
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    int b[n+1];

    for(int i=1;i<=n;i++){
        b[a[i]] = i;
    }

    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }


    return 0;
}
