#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int a = 0, b = 0;

    for(int i=0;i<10;i++){

        int input;

        cin>>input;

        if(i&1){
            if(input==1){
                b++;
            }
        }else{
            if(input==1){
                a++;
            }
        }
    }

    if(a>b){
        cout<<1<<endl;
    }else if(a<b){
        cout<<2<<endl;
    }else{
        cout<<0<<endl;
    }



  }

  return 0;

}
