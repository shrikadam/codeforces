#include <iostream>

using namespace std;

bool isvowel(char i){
    return (i=='a'||i=='e'||i=='i'||i=='o'||i=='u'||i=='A'||i=='E'||i=='I'||i=='O'||i=='U'||i=='y'||i=='Y');
}

int main(){

    string s, ans = "";

    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(isvowel(s[i]))  continue;
        else{
            ans += 46;
            if(s[i]<91)   ans += s[i]+32;
            else    ans += s[i];
        }  
    }

    cout << ans << endl;

    return 0;
}
