#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    int acc = 1;

    for(int i=1; i<s.length(); i++){
        if(s[i]>96){
            acc = 0;
            break;
        }
    }

    if(acc){
        cout << ((s[0]<91)?char(s[0]+32):char(s[0]-32));
        for(int i=1; i<s.length(); i++){
            cout << char(s[i]+32);
        }
        return 0;

    }

    cout << s << endl;

    return 0;
}