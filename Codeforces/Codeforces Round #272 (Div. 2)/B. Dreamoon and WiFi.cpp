#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string binaryRep(int n){

    string ans;

    while(n){
        if(n&1){
            ans.push_back('1');
        }else{
            ans.push_back('0');
        }
        n>>=1;
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a,b;

    cin>>a>>b;

    int netA = 0, netB = 0, q = 0;

    for(int i=0;i<a.length();i++){
        if(a[i]=='+'){
            netA++;
        }else{
            netA--;
        }
    }

    for(int i=0;i<b.length();i++){
        if(b[i]=='+'){
            netB++;
        }else if(b[i]=='-'){
            netB--;
        }else{
            q++;
        }
    }

    double ans = 0;

    if(q==0){
        if(netA==netB){
            ans = 1;
        }else{
            ans = 0;
        }
    }else{
        int fo = 0, to = (1<<q);

        for(int i=0;i<(1<<q);i++){

            string x = binaryRep(i);

            int len = q-x.length();

            string temp;

            for(int i=0;i<len;i++){
                temp.push_back('0');
            }

            x = temp + x;

            int curr = 0;

            for(int i=0;i<x.length();i++){
                if(x[i]=='0'){
                    curr--;
                }else{
                    curr++;
                }
            }

            if(netB+curr == netA){
                fo++;
            }
        }

        ans = (double)fo/to;   
    }

    cout<<fixed<<setprecision(12)<<ans;

    return 0;
}
