#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int m = INT_MAX;

        int a[n];

        for(int i=0;i<n;i++){
            cin>>a[i];
            m = min(m,a[i]);
        }

        int k = n/2;

        for(int i=0;i<n;i++){
            if(a[i]==m) continue;
            
            cout<<a[i]<<" "<<m<<endl;
            k--;
            if(k==0){
                break;
            }
        }
    }

    return 0;
}
