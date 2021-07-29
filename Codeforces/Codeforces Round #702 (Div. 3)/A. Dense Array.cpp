#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ans = 0;
    
    for(int i=1;i<n;i++){
        int ma = max(a[i],a[i-1]);
        int mi = min(a[i],a[i-1]);
        if(mi*2<ma){
            while(ma>mi){
                ma = (ma+1)/2;
                if(ma<=mi){
                    break;
                }
                ans++;
            }
        }
    }

    cout<<ans<<endl;

  }

return 0;

}
