#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;

    bool flag = true;

    while(cin>>n){
        
        if(n==42){
            flag = false;
        }
        if(flag==true){
            cout<<n<<endl;
        }
    }

    return 0;
}
