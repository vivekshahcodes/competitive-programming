#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    int a = 0, d = 0;

    for(int i=0;i<n;i++){
        char input;
        cin>>input;
        if(input=='A'){
            a++;
        }else{
            d++;
        }
    }

    if(a>d){
        cout<<"Anton";
    }else if(d>a){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }

    return 0;
}
