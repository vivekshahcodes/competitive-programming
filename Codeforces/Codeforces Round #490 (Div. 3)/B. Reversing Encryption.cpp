#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    string s;

    cin>>s;

    for(int i=0;i<n;i++){
        if(n%(i+1)==0){
            reverse(s.begin(),s.begin()+i+1);
        }
    }

    cout<<s;

    return 0;
}
