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

    bool flag = true;

    for(int i=0;i<n;i++){
        if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'){
            cout<<1<<endl;
            cout<<s[i]<<endl;
            flag = false;
            break;
        }
    }

    string ans = "";

    if(flag){
        cout<<2<<endl;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(s[j]=='2'||s[j]=='5'||s[i]==s[j]||((s[i]-'0') + (s[j]-'0'))%3==0){
                    ans+=s[i];
                    ans+=s[j];
                    cout<<ans<<endl;
                    flag = false;
                    break;
                }
            }
            if(!flag){
                break;
            }
        }
    }


  }

  return 0;

}
