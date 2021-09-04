#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drink = (k*l)/(n*nl);

    int lime = (c*d)/n;

    int salt = p/(np*n);

    cout<<min(drink,min(lime,salt));

    return 0;
}
