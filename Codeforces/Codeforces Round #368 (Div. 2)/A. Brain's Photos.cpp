#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,m;

    cin>>n>>m;

    bool flag = false;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            char input;
            cin>>input;

            if(input=='C'||input=='M'||input=='Y'){
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"#Color";
    }else{
        cout<<"#Black&White";
    }

    return 0;
}
