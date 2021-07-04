#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b;

    cin>>a>>b;

    int c = min(a,b);

    int d = ((a-c)+(b-c))/2;

    cout<<c<<" "<<d;

    return 0;
}
