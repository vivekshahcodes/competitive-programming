#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int m = 0;

    for(int i=n-1;i>=0;i--){
        if(m>=a[i]){
            b[i] = m+1;
        }else{
            b[i] = a[i];
            m = a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]==b[i]){
            cout<<0<<" ";
        }else{
            cout<<b[i]-a[i]<<" ";
        }
    }

    return 0;
}
