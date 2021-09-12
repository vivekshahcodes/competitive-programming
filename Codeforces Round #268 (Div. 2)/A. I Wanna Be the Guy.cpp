#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    cin>>n;

    set<int> s;

    int a;

    cin>>a;

    for(int i=0;i<a;i++){
        int input;
        cin>>input;
        s.insert(input);
    }

    int b;

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
