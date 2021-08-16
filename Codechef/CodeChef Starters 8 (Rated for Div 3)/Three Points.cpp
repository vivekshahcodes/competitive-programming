#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    ll a,b,c,d,e,f;

    cin>>a>>b>>c>>d>>e>>f;

    if(a==c){
        if(d>b){
            if(f>=d){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(f<=d){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }else if(b==d){
        if(c>a){
            if(e>=c){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(e<=c){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }else if(c>a && d>b){
        if(e==c && f>d || e>c && f==d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(c>a && d<b){
        if(e==c && f<d || e>c && f==d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(c<a && d<b){
        if(e==c && f<d || e<c && f==d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else if(c<a && d>b){
        if(e==c && f>d || e<c && f==d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
