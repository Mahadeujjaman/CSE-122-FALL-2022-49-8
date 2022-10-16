//Problem Name: Elephant
//Problem No: 617A

#include <iostream>
using namespace std;

int main(){
    int d;
    cin >> d;
    if(d%5==0){
        cout << d/5 << endl;
    }else{
        cout << (d/5) +1 << endl;
    }
    return 0;
}
