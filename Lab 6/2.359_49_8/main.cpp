//Problem Name: Word
//Problem No: 59A

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int i, up=0, low=0;
    cin>> s;
    for(i=0; i<s.size(); i++){
        if(isupper(s[i])){
            up++;
        } else {
            low++;
        }
    }
    if(up>low){
        for(i=0; i<s.size(); i++){
            s[i]=toupper(s[i]);
        }
        cout << s << endl;

    } else if (up=low){
        for(i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        cout << s << endl;

    } else {
        for(i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }

        cout << s << endl;
    }

    return 0;
}
