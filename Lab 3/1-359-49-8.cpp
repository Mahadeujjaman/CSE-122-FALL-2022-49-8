// codeforces problem no- 282A
// problem name- Bit++

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    int n, i=0, sum=0; char s[20];
    cin>>n;
    while(n--)
    {
        cin>>s;
        while(s[i]!='\0')
        {
            if(s[i]=='+'){sum++; break;}
            else if(s[i]=='-'){sum--; break;}
            i++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
