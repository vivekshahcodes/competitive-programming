#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b;

    cin>>a>>b;

    int curr = 1;
    bool vladik = true;

    while(true){
        
        if(vladik){
            if(a-curr>=0){
                a-=curr;
                vladik = false;
                curr++;
            }else{
                break;
            }
        }else{
            if(b-curr>=0){
                b-=curr;
                vladik = true;
                curr++;
            }else{
                break;
            }
        }
    }

    if(vladik){
        cout<<"Vladik";
    }else{
        cout<<"Valera";
    }

    return 0;
}
