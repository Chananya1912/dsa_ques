#include<iostream>
#include<cmath>
using namespace std;
void table(int num)
{
    for(int i=1;i<=10;i++)
    {
        cout<<num<<"X"<<i<<"="<<num*i<<endl;
    }
    
}
void primenum(int num)
{
   if(num<=1)
   {
    cout<<"not prime";
   }
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            cout<<"no prime num";
        }
    else{
        cout<<"prime";
    }
    }
    
}
int main()
{
    int num;
    cout<<"enter num";
    cin>>num;
    table(num);
    primenum(num);
    return 0;
}