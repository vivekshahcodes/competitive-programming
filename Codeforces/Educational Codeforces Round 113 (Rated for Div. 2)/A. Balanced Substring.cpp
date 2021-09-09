#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int l=-1,r=-1;

    int n;

    cin>>n;

    string s;

    cin>>s;

    for(int i=0;i<s.length()-1;i++){
        if((s[i]=='a'&&s[i+1]=='b')|| (s[i]=='b'&&s[i+1]=='a')){
            l = i+1;
            r = i+2;
            break;
        }
    }

    cout<<l<<" "<<r<<endl;

  }

  return 0;

}
