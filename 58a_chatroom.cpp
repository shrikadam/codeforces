#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    int check=0;

    for(int i=0; i<s.length(); i++){
        if(check==0 && s[i]=='h')   check = 1;
        else if(check==1 && s[i]=='e')  check++;
        else if(check==2 && s[i]=='l')  check++;
        else if(check==3 && s[i]=='l')  check++;
        else if(check==4 && s[i]=='o'){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}