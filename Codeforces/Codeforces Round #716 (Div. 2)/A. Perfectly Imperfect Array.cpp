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

    for(int i=0;i<n;i++){
        
        int input;

        cin>>input;

        int x = sqrt(input);

        if(x*x!=input){
            flag = false;
        }
    }

    if(flag){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

  }

  return 0;

}
