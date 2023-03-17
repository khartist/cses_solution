#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned long long n;
    cin>>n;
    cout <<n <<" ";
    while (n>0){
        if (n==1){
            break;
        }
        else if (n%2==0){
            n /=2;
            cout <<n <<" ";
        }
        else if (n%2!=0){
            n = n*3 +1;
            cout <<n <<" ";
        }
    }
    return 0;
}
