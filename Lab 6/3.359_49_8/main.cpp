//Problem Name: Wrong Substraction
//Problem No: 977A


#include <iostream>
using namespace std;
int main()
{
    int n, k, i;
    cin >> n>>k;

    for(i=0; i<k; i++){
        if(n%10!=0){
            n=n-1;
        } else if (n%10==0) {
            n=n/10;
        }
    }
    cout << n << endl;
    return 0;
}
