#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,d,h,w=0;

    cin>>n>>d>>h;

    int a[n];

    bool flag = false;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>0){
            w+=a[i];
        }else{
            w = max(w-d,0);
        }

        if(w>h){
            flag = true;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
