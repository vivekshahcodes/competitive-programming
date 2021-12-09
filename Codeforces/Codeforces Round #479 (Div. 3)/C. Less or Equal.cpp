#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;

    cin>>n>>k;

    int a[n+1];

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    sort(a+1,a+n+1);

    if(k==n){
        cout<<a[n];
    }else if(k==0){
        if(a[1]>1){
            cout<<a[1]-1;
        }else{
            cout<<-1;
        }
    }else if(a[k]==a[k+1]){
        cout<<-1;
    }else{
        cout<<a[k];
    }


    return 0;
}
