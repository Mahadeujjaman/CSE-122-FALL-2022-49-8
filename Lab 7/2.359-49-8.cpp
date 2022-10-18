//Problem Name: Tram
//Problem No: 116A

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
   int i, n, a, b, sum=0, x=0;
   cin >> n;
   for(i=0; i<n; i++){
      cin >> a >> b;
      sum=(a+x)-b;
      if(sum<0){
         x=0;
      } else {
         x=sum;
      }
   }
   cout <<sum;
   return 0;
}
