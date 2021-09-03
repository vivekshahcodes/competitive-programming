#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    string ans;

    for(int i=0;i<n;i++){

        string s;

        cin>>s;

        if(s[i]=='0'){
            ans+="1";
        }else{
            ans+="0";
        }

    }

    cout<<ans<<endl;


  }

  return 0;

}
