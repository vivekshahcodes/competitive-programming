#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    bool odd = false, even = false;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1){
            odd = true;
        }else{
            even = true;
        }
    }

    if(odd && even){
        sort(a,a+n);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
