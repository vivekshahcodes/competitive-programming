#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isBeautiful(int n){

    map<int,int> m;
    int a = n;

    while(a!=0){
        int x = a%10;
        a/=10;
        m[x]++;
        if(m[x]>1){
            return false;
        }
    }

    return true;
}

int main(){

    int n;

    cin>>n;

    n++;

    while(!isBeautiful(n)){
        n++;
    }

    cout<<n<<endl;

    return 0;
}
