#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    if(s.length()<3){
        cout<<s;
        return 0;
    }

    string temp;

    for(int i=0;i<s.length();i++){
        if(i<s.length()-2 && s.substr(i,3)=="WUB"){
            i+=2;
            if(temp.length()>0){
                cout<<temp<<" ";
                temp = "";
            }
        }else{
            temp+=s[i];
            if(i==s.length()-1){
                cout<<temp;
            }
        }
    }

    return 0;
}
