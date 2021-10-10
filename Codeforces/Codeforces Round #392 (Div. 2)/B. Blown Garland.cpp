#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void assignColor(vector<int> &v, int x, char curr){

    if(curr=='R'){
        v[0] = x;
    }else if(curr=='B'){
        v[1] = x;
    }else if(curr=='Y'){
        v[2] = x;
    }else{
        v[3] = x;
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    string a,b,c,d;

    for(int i=0;i<s.length();i++){
        if(i%4==0){
            a.push_back(s[i]);
        }else if(i%4==1){
            b.push_back(s[i]);
        }else if(i%4==2){
            c.push_back(s[i]);
        }else{
            d.push_back(s[i]);
        }
    }

    vector<int> v(4);

    int x = 0;
    char curr;

    for(int i=0;i<a.length();i++){
        if(a[i]=='!'){
            x++;
        }else{
            curr = a[i];
        }
    }

    assignColor(v,x,curr);

    x = 0;

    for(int i=0;i<b.length();i++){
        if(b[i]=='!'){
            x++;
        }else{
            curr = b[i];
        }
    }

    assignColor(v,x,curr);

    x = 0;

    for(int i=0;i<c.length();i++){
        if(c[i]=='!'){
            x++;
        }else{
            curr = c[i];
        }
    }

    assignColor(v,x,curr);

    x = 0;

    for(int i=0;i<d.length();i++){
        if(d[i]=='!'){
            x++;
        }else{
            curr = d[i];
        }
    }

    assignColor(v,x,curr);

    for(auto i:v){
        cout<<i<<" ";
    }    

    return 0;
}
