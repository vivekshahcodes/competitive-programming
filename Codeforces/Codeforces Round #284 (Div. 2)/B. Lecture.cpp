#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n,m;

    cin>>n>>m;

    map<string,string> a,b;

    for(int i=0;i<m;i++){

        string x,y;
        cin>>x>>y;
        a[x] = y;
        b[y] = x;
    }

    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(a.count(s)>0){
            if(s.length()<=a[s].length()){
                cout<<s<<" ";
            }else{
                cout<<a[s]<<" ";
            }
        }else{
            if(s.length()<b[s].length()){
                cout<<s<<" ";
            }else{
                cout<<b[s]<<" ";
            }
        }
    }

    return 0;
}
