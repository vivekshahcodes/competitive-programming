#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    int a[26] = {0};

    for(int i=0;i<n;i++){

        string s;

        cin>>s;

        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
    }

    bool ans = true;

    for(int i=0;i<26;i++){
        if(a[i]%n!=0){
            ans = false;
            break;
        }
    }

    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

  }

  return 0;

}
