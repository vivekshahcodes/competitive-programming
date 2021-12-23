#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,k;
    cin>>n>>k;

    int a[n],b[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i] = a[i];
    }

    sort(b,b+n);

    int x = b[n-1]-b[0];

    if(x>k){
        cout<<"NO";
    }else{
        cout<<"YES\n";
        for(int i=0;i<n;i++){
            for(int j=1;j<=a[i];j++){
                if(j%k==0){
                    cout<<k<<" ";
                }else{
                    cout<<j%k<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
