#include<iostream>
using namespace std;
void palindrome(int num)
{
    if(num<0)
    {
        cout<<"no palindrome for negative num";
    }
    else{
    int rev=0;
    int org=num;
     while(num>0)
     {
    int n=num%10;
    rev=rev*10+n;
    num=num/10;
     }
     if(rev==org)
     {
        cout<<"palindrome";
     }
     else
     {
        cout<<"not"<<endl;
     }
}}
void revnum(int num)
{ 
    int rev=0;
    while(num>0)
    {
   int n=num%10;
   rev=rev*10+n;
   num=num/10;
    }
    cout<<"reversed number is"<<rev;
}
int main()
{
    int num;
    cout<<"enter num";
    cin>>num;
    palindrome(num);
    revnum(num);
}