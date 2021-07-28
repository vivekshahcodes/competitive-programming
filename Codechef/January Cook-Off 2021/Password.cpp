#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    string s;

    cin>>s;

    bool a,b,c,d,e;

    a=b=c=d=e=false;

    if(s.length()>=10){
        e = true;
    }else{
        cout<<"NO"<<endl;
        continue;
    }

    if(islower(s[0])||islower(s[s.length()-1])){
        a = true;
    }

    for(int i=1;i<s.length()-1;i++){
        if(islower(s[i])){
            a = true;
        }else if(isupper(s[i])){
            b = true;
        }else if(isdigit(s[i])){
            c = true;
        }else{
            d = true;
        }
    }

    if(a&&b&&c&&d&&e){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


  }

  return 0;

}
