#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s,t;

    cin>>s>>t;

    int i = 0, j = 0;

    while(j<t.length()){
        if(s[i]==t[j]){
            i++;
            j++;
        }else{
            j++;
        }
    }

    cout<<i+1;

    return 0;
}
