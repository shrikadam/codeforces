#include <iostream>

using namespace std;

int main(){

    int ones = 0, twos = 0, threes = 0;
    string s;
    string ans = "";

    cin >> s;

    for(int i=0; i<s.length(); i+=2){
        if(s[i]=='1')   ones++;
        else if(s[i]=='2')   twos++;
        else   threes++;
    }   

    for(int i=0; i<ones; i++)   ans += "1+";
    for(int i=0; i<twos; i++)   ans += "2+";
    for(int i=0; i<threes; i++)   ans += "3+";

    ans.pop_back();

    cout << ans << endl;


    return 0;
}