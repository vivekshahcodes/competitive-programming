#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int l, r, ans = 0;

    for(int i = 0; i < n; i++){
        
        int input;
        cin>>input;

        if(i == 0){
            l = input;
            r = input;
        }else{
            if(input < l){
                l = input;
                ans++;
            }else if(input > r){
                r = input;
                ans++;
            }
        }
    }

    cout<<ans;


    return 0;
}
