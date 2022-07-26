//problem-231A-Team
//id-359

#include<iostream>
using namespace std;

int main()
{
int n,i,x,y,z,s=0;
cin>>n;
for(i=0;i<n;i++)
{
cin>>x>>y>>z;
if(x==1&&y==1)
s++;
else if(z==1&&y==1)
s++;
else if(x==1&&z==1)
s++;
else
continue;
}
cout<<s<<endl;
    return 0;
}
