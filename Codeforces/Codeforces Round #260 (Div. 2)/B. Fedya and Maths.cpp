#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin>>s;

    int x;

    if(s.length()==1){
        x = stoi(s);
        x %= 4;
    }else{
        string r = s.substr(s.length()-2,2);
        x = stoi(r);
        x %= 4;
    }

    int two = pow(2,x);
    int three = pow(3,x);
    int four = pow(4,x);

    cout<<(1+two%5+three%5+four%5)%5;

    return 0;
}
