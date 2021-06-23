#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isBeautiful(int n){

    string a = to_string(n);

    for(int i=0;i<a.length();i++){
        for(int j=i+1;j<a.length();j++){
            if(a[i]==a[j]){
                return false;
            }
        }
    }

    return true;
}

int main(){

    int n;

    cin>>n;

    n++;

    while(!isBeautiful(n)){
        n++;
    }

    cout<<n;

    return 0;
}
