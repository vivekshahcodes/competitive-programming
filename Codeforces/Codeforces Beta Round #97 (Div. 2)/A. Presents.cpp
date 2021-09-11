#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;
    
    map<int,int> m;

    for(int i=1;i<=n;i++){
        
        int input;
        cin>>input;
        m[input] = i;
    }

    for(auto i:m){
        cout<<i.second<<" ";
    }

    return 0;
}
