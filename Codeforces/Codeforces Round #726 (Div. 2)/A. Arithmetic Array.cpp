#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;
    
    cin>>n;
    
    int a[n], s = 0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }
    
    if(s%n==0 && s/n==1){
        cout<<0<<endl;
    }else if(s>n){
        cout<<s-n<<endl;
    }else{
        cout<<1<<endl;
    }

  }

  return 0;

}
