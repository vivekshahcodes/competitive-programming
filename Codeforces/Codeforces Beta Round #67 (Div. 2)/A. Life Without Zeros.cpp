#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b;

    cin>>a>>b;

    int x = stoi(a) + stoi(b);

    string temp = to_string(x);

    string final;

    for(int i=0;i<temp.size();i++){
        if(temp[i]!='0'){
            final+=temp[i];
        }
    }

    string c,d;

    for(int i=0;i<a.length();i++){
        if(a[i]!='0'){
            c+=a[i];
        }
    }

    for(int i=0;i<b.length();i++){
        if(b[i]!='0'){
            d+=b[i];
        }
    }

    int y = stoi(c)+stoi(d);

    if(stoi(final)==y){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
