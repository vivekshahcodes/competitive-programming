#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int gcd(int a, int b){

    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b,c;

    cin>>a>>b>>c;

    if(c%gcd(a,b)!=0){
        cout<<"No";
    }else{
        bool ans = false;
        for(int x=0;x<=10000;x++){
            int temp = c-(a*x);
            if(temp%b==0 && (temp/b)>=0){
                ans = true;
                break;
            }
        }

        if(ans){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
    }

    return 0;
}
