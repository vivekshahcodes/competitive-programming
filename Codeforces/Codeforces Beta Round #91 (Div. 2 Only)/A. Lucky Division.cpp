#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isLucky(int n){

    int x = n;

    while(x>0){

        if((x%10)!=4 && (x%10)!=7){
            return false;
        }

        x/=10;
    }

    return true;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    bool flag = false;

    for(int i=1;i<=1000;i++){
        if(isLucky(i)){
            if(n%i==0){
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
