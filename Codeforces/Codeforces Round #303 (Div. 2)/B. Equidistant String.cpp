#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b;

    cin>>a>>b;

    int diff = 0;

    for(int i=0;i<a.length();i++){
        if(a[i]!=b[i]){
            diff++;
        }
    }

    if(diff & 1){
        cout<<"impossible";
    }else{
        int x = diff/2;
        string t = a;

        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                t[i] = b[i];
                x--;
            }
            if(x==0){
                break;
            }
        }

        cout<<t;
    }

    return 0;
}
