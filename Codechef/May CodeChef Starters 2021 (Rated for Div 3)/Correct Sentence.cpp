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

        string s;

        cin>>s;

        if(s.size()==1){
            if(s[0]>='a' && s[0]<='m'){
                continue;
            }else if(s[0]>='N' && s[0]<='Z'){
                continue;
            }else{
                flag = false;
            }
        }

        for(int i=1;i<s.length();i++){
            if(isupper(s[i]) && isupper(s[i-1])){
                if((s[i]>='N' && s[i]<='Z') && (s[i-1]>='N' && s[i-1]<='Z')){
                    continue;
                }else{
                    flag = false;
                }
            }else if(islower(s[i]) && islower(s[i-1])){
                if((s[i]>='a' && s[i]<='m') && (s[i-1]>='a' && s[i-1]<='m')){
                    continue;
                }else{
                    flag = false;
                }
            }else{
                flag = false;
            }
        }

    }

    if(flag){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


  }

  return 0;

}
