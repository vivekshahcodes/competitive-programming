#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int a[n+1],b[n+1],aSum=0,bSum=0;
    
    for(int i=1;i<=n;i++){
        cin>>a[i];
        aSum+=a[i];
    }
    
    for(int i=1;i<=n;i++){
        cin>>b[i];
        bSum+=b[i];
    }

    if(aSum!=bSum){
        cout<<-1<<endl;
    }else{
        vector<int> x,y;

        for(int i=1;i<=n;i++){
            if(a[i]<b[i]){
                for(int j=0;j<b[i]-a[i];j++){
                    y.push_back(i);
                }
            }else if(a[i]>b[i]){
                for(int j=0;j<a[i]-b[i];j++){
                    x.push_back(i);
                }
            }
        }

        cout<<x.size()<<endl;

        for(int i=0;i<x.size();i++){
            cout<<x[i]<<" "<<y[i]<<endl;
        }
    }


  }

  return 0;

}
