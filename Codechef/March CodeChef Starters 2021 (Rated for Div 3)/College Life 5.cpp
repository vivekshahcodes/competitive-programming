#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n,m;

    cin>>n>>m;

    ll f[n], c[m];

    for(int i=0;i<n;i++){
        cin>>f[i];
    }

    for(int i=0;i<m;i++){
        cin>>c[i];
    }

    bool football = true;

    int i=0,j=0,ans=0;

    while(i<n && j<m){

        if(football){
            
            if(c[j]<f[i]){
                football = false;
                ans++;
                j++;
            }else{
                i++;
            }
        }else{

            if(f[i]<c[j]){
                football = true;
                ans++;
                i++;
            }else{
                j++;
            }
        }
    }

    if(i<n){
        if(!football){
            ans++;
        }
    }

    if(j<m){
        if(football){
            ans++;
        }
    }

    cout<<ans<<endl;

  }

  return 0;

}
