#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    getline(cin,s);

    string ans;
    ans.push_back('<');
    bool quotes = false;

    for(int i=0;i<s.length();i++){

        if(quotes){
            
            if(s[i]=='"'){
                ans.push_back('>');
                cout<<ans<<endl;
                ans.clear();
                ans.push_back('<');
                quotes = false;
            }else{
                ans.push_back(s[i]);
            }
        }else{

            if(s[i]=='"'){
                quotes = true;
            }else if(s[i]==' '){
                if(ans!="<"){
                    ans.push_back('>');
                    cout<<ans<<endl;
                    ans.clear();
                    ans.push_back('<');
                }
            }else{
                ans.push_back(s[i]);
            }
        }

    }
    
    if(ans!="<"){
        ans.push_back('>');
        cout<<ans;
    }

    return 0;
}
