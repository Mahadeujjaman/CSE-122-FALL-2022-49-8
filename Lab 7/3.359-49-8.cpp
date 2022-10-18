//Problem Name: Queue at the School
//Problem No: 266B

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   int i, j,a, b;
   cin>> a >> b;
   string s;
   cin >> s;
   for(i=0; i<b; i++){
      for(j=0; j<s.size()-1; j++){
         if(s[i]=='B' && s[i+1]=='G'){
            s[j]='G';
            s[j+1]='B';
            j++;
         }
      }
   }
   return 0;
}
