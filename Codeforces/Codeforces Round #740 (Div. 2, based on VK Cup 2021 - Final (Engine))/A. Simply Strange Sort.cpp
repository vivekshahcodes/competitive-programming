#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;
    
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    if(is_sorted(a,a+n)){
        cout<<0<<endl;
    }else{
        int ans = 0, i = 1;
        while(!is_sorted(a,a+n)){
            if(i&1){
                for(int j=0;j<n-1;j+=2){
                    if(a[j]>a[j+1]){
                        int temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
            }else{
                for(int j=1;j<n-1;j+=2){
                    if(a[j]>a[j+1]){
                        int temp = a[j];
                        a[j] = a[j+1];
                        a[j+1] = temp;
                    }
                }
            }

            i++;
        }

        cout<<i-1<<endl;
    }

  }

  return 0;

}
