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

    if(n<3){
        cout<<0;
    }else{
        sort(a,a+n);
        cout<<min(a[n-2]-a[0],a[n-1]-a[1]);
    }

    return 0;
}
