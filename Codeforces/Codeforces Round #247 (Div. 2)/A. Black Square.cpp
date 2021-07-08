#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    int a,b,c,d;

    cin>>a>>b>>c>>d;

    string s;

    cin>>s;

    int arr[4] = {0};

    for(int i=0;i<s.length();i++){

        arr[(s[i]-'0')-1]++;

    }

    cout<<arr[0]*a+arr[1]*b+arr[2]*c+arr[3]*d;

    return 0;
}
