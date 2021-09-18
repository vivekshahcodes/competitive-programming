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

    for(int i=1;i<n;i++){
        cin>>a[i];
    }

    int i = 1;

    while(i<k){
        i+=a[i];
    }

    if(i==k){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
