#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

bool isPalindrome(string s){
    string a = s.substr(0,2);
    string b = s.substr(3,2);

    reverse(b.begin(),b.end());

    return a==b;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;

    cin>>s;

    do{
        
        string a = s.substr(0,2);
        string b = s.substr(3,2);

        int x = stoi(a);
        int y = stoi(b);

        y++;
        if(y==60){
            x++;
            y = 0;
            if(x==24){
                x = 0;
            }
        }

        a = to_string(x);
        b = to_string(y);

        if(x<10 && y<10){
            s = "0"+a+":0"+b;
        }else if(x<10){
            s = "0"+a+":"+b;
        }else if(y<10){
            s = a+":0"+b;
        }else {
            s = a+":"+b;
        }

    }while(!isPalindrome(s));

    cout<<s;

    return 0;
}
