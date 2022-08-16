// codeforces problem no- 112A
// problem name- Petya and Strings

#include<stdio.h>
#include<string.h>

int low(char s[100]){
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90)
            s[i]+=32;
    }
}

int main(){

    char a[100],b[100];
    gets(a); gets(b);
    low(a);
    low(b);
    int d=strcmp(a,b);
    printf("%d\n",d);

}
