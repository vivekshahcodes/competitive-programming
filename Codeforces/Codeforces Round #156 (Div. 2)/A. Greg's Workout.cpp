#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;

    cin>>n;

    int chest = 0, biceps = 0, back = 0;

    for(int i=1;i<=n;i++){

        int input;
        cin>>input;

        if(i%3==1){
            chest+=input;
        }else if(i%3==2){
            biceps+=input;
        }else{
            back+=input;
        }
    }

    if(chest>biceps && chest>back){
        cout<<"chest";
    }else if(biceps>chest & biceps>back){
        cout<<"biceps";
    }else{
        cout<<"back";
    }

    return 0;
}
