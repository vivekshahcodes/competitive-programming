#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    getline(cin,s);

    int n = s.length()-2;

    while(s[n]==' '){
        n--;
    }

    char a[6] = {'a','e','i','o','u','y'};

    for(int i=0;i<6;i++){
        if(tolower(s[n])==a[i]){
            cout<<"YES";
            return 0;
        }
    }

    cout<<"NO";

    return 0;
}
