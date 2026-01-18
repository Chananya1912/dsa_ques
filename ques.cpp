#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum1=0;
    int sum2=0;
    cout<<"enter terms";
    cin>>n;
    int arr[n];
    int arr2[n];
    cout<<"enter terms";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        sum1+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum2+=arr2[n];
    }
    int x=sum2-sum1;
cout<<"difference bw sum"<<x;
}       