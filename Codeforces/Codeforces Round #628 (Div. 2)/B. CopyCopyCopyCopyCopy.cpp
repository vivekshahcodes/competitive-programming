#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

  int t;

  cin>>t;

  while(t--){

    int n;

    cin>>n;

    set<int> s;
    
    for(int i=0;i<n;i++){
        
        int input;

        cin>>input;

        s.insert(input);

    }

    cout<<s.size()<<endl;

  }

  return 0;

}
