// codeforces problem no- 791A
// problem name- Bear and Big Brother

#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int a,b,c=0;
    cin>>a>>b;
    while(a<=b)
    {
        a*=3; b*=2;
        c++;
    }
    cout<<c<<endl;

    return 0;
}

