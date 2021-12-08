#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s, ans;
    
    cin>>s;

    bool neg = s[0]=='-'?true:false;

    if(neg){
        ans.push_back('(');
    }

    ans.push_back('$');
    int c = 0;
    bool flag = false;

    for(int i=0;i<s.length();i++){
        if(s[i]=='-'){
            continue;
        }

        ans.push_back(s[i]);

        if(flag==true){
            c++;
        }

        if(s[i]=='.'){
            flag = true;
        }

        if(c==2){
            break;
        }
    }

    if(c==0){
        ans.push_back('.');
    }

    for(int i=c;i<2;i++){
        ans.push_back('0');
    }

    if(neg){
        ans.push_back(')');
    }

    int ind;

    for(int i=0;i<ans.length();i++){
        if(ans[i]=='.'){
            ind = i;
            break;
        }
    }

    int x = ind;

    vector<int> commas;

    if(neg){

        while(x-3>2){
            x-=3;
            commas.push_back(x);
        }
    }else{

        while(x-3>1){
            x-=3;
            commas.push_back(x);
        }
    }

    sort(commas.begin(),commas.end());

    string finalAns;

    x = 0;

    for(int i=0;i<ans.length();i++){
        if(x<commas.size() && i==commas[x]){
            finalAns.push_back(',');
            x++;
        }
        finalAns.push_back(ans[i]);
    }

    cout<<finalAns;

    return 0;
}
