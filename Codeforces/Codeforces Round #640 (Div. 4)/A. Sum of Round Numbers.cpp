#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;

  cin>>t;

  while(t--){

    string s;

    cin>>s;

    int mul=1,c=0;

    vector<int> v;

    for(int i=s.length()-1;i>=0;i--){
        if((s[i]-'0')*mul!=0){
            c++;
            v.push_back((s[i]-'0')*mul);
        }
        mul*=10;
    }

    cout<<c<<endl;

    for(auto i:v){
        cout<<i<<" ";
    }

    cout<<endl;

  }

}
