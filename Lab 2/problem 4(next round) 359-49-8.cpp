//cf problem no- 158A
// problem name- next round
//id-359
#include<iostream>
using namespace std;
int main()
{
int n,k,a[100],i,sum=0;
cin>>n>>k;
for(i=0; i<n; i++)
{ cin>>a[i]; }
for(i=0; i<n; i++)
{
if(a[i]>=a[k-1] && a[i]>0)
sum++;
}
cout<<sum;
return 0;
}
