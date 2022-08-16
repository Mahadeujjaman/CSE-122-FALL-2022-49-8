// codeforces problem no- 339A
// problem name- Helpful Maths

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char num[100],temp[100];
    cin>>num;
    int j, i, len=strlen(num);

    for(i=0; i<len-1; i+=2)
    {
        for(j=0; j<len-1; j+=2)
        {
            if(num[j]>num[j+2])
            {
                temp[j]=num[j];
                num[j]=num[j+2];
                num[j+2]=temp[j];
            }
        }
    }
    cout<<num<<endl;

    return 0;
}
