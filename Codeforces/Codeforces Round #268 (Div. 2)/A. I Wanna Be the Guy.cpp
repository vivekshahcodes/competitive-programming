#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n;
    
    cin>>n;
    
    set<int> s;

    int a,b;

    cin>>a;

    for(int i=0;i<a;i++){
        int input;
        cin>>input;
        s.insert(input);
    }

    cin>>b;

    for(int i=0;i<b;i++){
        int input;
        cin>>input;
        s.insert(input);
    }

    if(s.size()==n){
        cout<<"I become the guy.";
    }else{
        cout<<"Oh, my keyboard!";
    }

    return 0;
}
