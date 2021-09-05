#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    string s;

    cin>>s;

    for(int i=0;i<s.length();i++){

        if(s[i]!='?'){
            int ind = i;
            while(ind-1>=0){
                if(s[ind-1]=='?'){
                    if(s[ind]=='R'){
                        s[ind-1] = 'B';
                    }else{
                        s[ind-1] = 'R';
                    }
                    ind--;
                }else{
                    break;
                }
            }

            while(i+1<s.length()){
                if(s[i+1]=='?'){
                    if(s[i]=='R'){
                        s[i+1] = 'B';
                    }else{
                        s[i+1] = 'R';
                    }
                    i++;
                }else{
                    break;
                }
            }

        }
    }

    if(s[0]=='?'){
        for(int i=0;i<s.length();i++){
            if(i&1){
                s[i] = 'R';
            }else{
                s[i] = 'B';
            }
        }
    }

    cout<<s<<endl;

  }

  return 0;

}
