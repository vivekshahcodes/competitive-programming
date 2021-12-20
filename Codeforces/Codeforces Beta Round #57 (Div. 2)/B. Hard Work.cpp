#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string filter(string s){

    string ans;

    for(int i=0;i<s.length();i++){
        if(isalpha(s[i])){
            ans.push_back(tolower(s[i]));
        }
    }

    return ans;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a[3];

    cin>>a[0]>>a[1]>>a[2];

    a[0] = filter(a[0]);
    a[1] = filter(a[1]);
    a[2] = filter(a[2]);

    int n;

    cin>>n;

    for(int i=0;i<n;i++){

        string s;

        cin>>s;

        s = filter(s);

        bool flag = false;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j) continue;
                string temp = a[i]+a[j]+a[3-(i+j)];
                if(temp==s){
                    flag = true;
                    break;
                }
            }
        }

        if(flag){
            cout<<"ACC\n";
        }else{
            cout<<"WA\n";
        }

    }

    return 0;
}
