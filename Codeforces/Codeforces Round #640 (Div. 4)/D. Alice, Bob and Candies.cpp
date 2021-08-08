#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll n;

    cin>>n;

    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    ll totalAlice = 0, totalBob = 0, currAlice = 0, currBob = 0, moves = 0;

    ll l = 0, r = n-1;

    bool alice = true;

    while(l<=r){

        if(alice){
            while(currAlice<=currBob && l<=r){
                currAlice+=a[l];
                l++;
            }
            currBob = 0;
            totalAlice+=currAlice;
            alice = false;
            moves++;
        }else{
            while(currBob<=currAlice && l<=r){
                currBob+=a[r];
                r--;
            }
            currAlice = 0;
            totalBob += currBob;
            alice = true;
            moves++;
        }
    }

    cout<<moves<<" "<<totalAlice<<" "<<totalBob<<endl;


  }

  return 0;

}
