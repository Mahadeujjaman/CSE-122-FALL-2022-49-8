// codeforces problem no- 546A
// problem name- Soldier and Bananas

#include<iostream>
using namespace std;

int main(){

    int k,n,w,i,sum=0,borrrow;
    cin>>k>>n>>w;
    for(i=1; i<=w; i++)
    {
        sum+=k*i;
    }
    if(sum>n)
        cout<<sum-n<<endl;
    else
        cout<<"0"<<endl;

    return 0;
}
