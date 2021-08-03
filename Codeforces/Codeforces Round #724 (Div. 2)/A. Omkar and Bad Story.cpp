#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    bool flag = true;

    int m = 0;

    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        if(input<0){
            flag = false;
        }
        m = max(input,m);
    }

    if(flag){
        cout<<"YES"<<endl;
        cout<<m+1<<endl;
        for(int i=0;i<=m;i++){
            cout<<i<<" ";
        }
        cout<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
