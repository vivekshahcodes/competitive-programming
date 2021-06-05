#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;

    int c = 0, ans = 0;

    while(getline(cin,s)){
        if(s[0]=='+'){
            c++;
        }else if(s[0]=='-'){
            c--;
        }else{
            int l = s.length();
            for(int i=0;i<s.length();i++){
                l--;
                if(s[i]==':'){
                    break;
                }
            }
            ans+=c*l;
        }
    }

    cout<<ans;



    return 0;
}
