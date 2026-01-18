#include<iostream>
using namespace std;
void abc(int n){
if(n == 6){
return;
}
cout<<n<<" "; abc(n+1);
}
int printSum(int n) {
    if (n == 0) {
        return 0;
    }
    return n + printSum(n - 1);
}
int main()
{
int n = 1;
abc(n);
int n;
    cin>>n;
    cout<<printSum(n);
 
return 0;
}