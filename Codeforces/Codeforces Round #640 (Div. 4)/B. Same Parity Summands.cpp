#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
 
  int t;
 
  cin>>t;
 
  while(t--){
 
    ll n,k;
    
    cin>>n>>k;
 
    if(n&1 && k&1){
        if(n<k){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            ll a = 0;
            for(ll i=0;i<k-1;i++){
                cout<<1<<" ";
                a++;
            }
            cout<<n-a<<endl;
        }
    }else if(!(n&1) && k&1){
        if(n<k*2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            ll a = 0;
            for(ll i=0;i<k-1;i++){
                cout<<2<<" ";
                a+=2;
            }
            cout<<n-a<<endl;
        }
    }else if(n&1 && !(k&1)){
        cout<<"NO"<<endl;
    }else{
        if(n<k){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
            ll a = 0;
            for(ll i=0;i<k-1;i++){
                cout<<1<<" ";
                a++;
            }
            cout<<n-a<<endl;
        }
    }
 
 
  }
