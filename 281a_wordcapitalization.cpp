#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    s[0]=(s[0]<91)?s[0]:(s[0]-32);

    cout << s << endl;

    return 0;
}