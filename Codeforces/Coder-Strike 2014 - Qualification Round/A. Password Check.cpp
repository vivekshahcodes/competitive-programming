#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    cin>>s;

    vector<bool> v(4,false);

    if(s.length()>=5){
        v[0] = true;
    }

    for(int i=0;i<s.length();i++){
        
        if(isdigit(s[i])){
            v[1] = true;
        }else if(isupper(s[i])){
            v[2] = true;
        }else if(islower(s[i])){
            v[3] = true;
        }
    }

    bool ans = true;

    for(int i=0;i<4;i++){
        if(v[i]==false){
            ans = false;
            break;
        }
    }

    if(ans){
        cout<<"Correct";
    }else{
        cout<<"Too weak";
    }

    return 0;
}
