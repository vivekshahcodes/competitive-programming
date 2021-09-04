#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    set<int> s;

    for(int i=0;i<4;i++){
        int input;
        cin>>input;
        s.insert(input);
    }

    cout<<4-s.size();

    return 0;
}
