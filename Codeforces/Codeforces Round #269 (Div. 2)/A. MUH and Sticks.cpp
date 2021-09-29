#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int,int> m;

    for(int i=0;i<6;i++){

        int input;
        cin>>input;
        m[input]++;

    }

    if(m.size()==3){
        bool flag = false;
        for(auto i:m){
            if(i.second==4){
                flag = true;
            }
        }

        if(flag){
            cout<<"Bear";
        }else{
            cout<<"Alien";
        }
    }else if(m.size()==2){

        bool flag1 = false, flag2 = false;
        for(auto i:m){
            if(i.second==4){
                flag1 = true;
            }else if(i.second==5){
                flag2 = true;
            }
        }

        if(flag1){
            cout<<"Elephant";
        }else if(flag2){
            cout<<"Bear";
        }else{
            cout<<"Alien";
        }
    }else if(m.size()==1){
        cout<<"Elephant";
    }else{
        cout<<"Alien";
    }

    return 0;
}
