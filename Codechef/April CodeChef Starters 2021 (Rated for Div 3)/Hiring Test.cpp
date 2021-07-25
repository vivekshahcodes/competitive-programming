#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n,m;

    cin>>n>>m;

    int x,y;

    cin>>x>>y;

    for(int i=0;i<n;i++){
        
        string s;

        cin>>s;

        int p=0,f=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='F'){
                f++;
            }else if(s[i]=='P'){
                p++;
            }
        }

        if(f>=x||(f==x-1&&p>=y)){
            cout<<1;
        }else{
            cout<<0;
        }
    }

    cout<<endl;

  }

  return 0;

}
