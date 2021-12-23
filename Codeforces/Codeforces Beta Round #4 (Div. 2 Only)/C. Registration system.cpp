#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    map<string,int> m;

    for(int i=0;i<n;i++){
        string s;
        cin>>s;

        if(m.count(s)==0){
            cout<<"OK\n";
        }else{
            cout<<s<<m[s]<<"\n";
        }

        m[s]++;
    }

    return 0;
}
