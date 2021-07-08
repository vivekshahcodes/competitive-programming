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

    map<char,int> m;

    if(n==1){
        cout<<"YES"<<endl;
    }else{
        bool flag = true;
        m[s[0]]++;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1] && m[s[i]]>0){
                flag = false;
                break;
            }
            m[s[i]]++;
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

  }

  return 0;

}
