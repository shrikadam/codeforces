#include <iostream>

using namespace std;

int main(){

    string s;

    cin >> s;

    int start=0;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            if(start)   cout << " ";
            i+=2;
        } 
        else{
            if(!start)  start=1;
            cout << s[i];
        }
    }


    return 0;
}