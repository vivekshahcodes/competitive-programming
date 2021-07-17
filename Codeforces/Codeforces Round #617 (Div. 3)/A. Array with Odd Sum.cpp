#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;
    
    cin>>n;
    
    int a[n], odd = 0, eve = 0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]&1){
            odd++;
        }else{
            eve++;
        }
    }

    if(odd>=1 && eve >=1){
        cout<<"YES"<<endl;
    }else if(n&1 && eve==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


  }

return 0;

}
