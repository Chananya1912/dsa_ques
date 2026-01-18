#include<iostream>
using namespace std;
void linearsearch(int n,int arr[],int target)
{
    
 for(int i=0;i<n;i++)
 {
    if(arr[i]==target)
    {
         int found=1;
    }    
    
 }
 if(found)
 {
    cout<<"found"<<i<<endl;
 }
 else{
    cout<<"not found";
 }
}
 void add(int n, int arr[])
 {
    int sum=0;
    for(int i =0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"sum of the array is"<<sum;
 }
void insertion(int n , int arr[],int pos,int num)
{
    for(int i=n;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=num;
   
}

int main()
{
    int i ,n, target,num,pos;
    int found=0;
    cout<<"enter size of array";
    cin>>n;
    int*arr=new int[n];
    cout<<"enter array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"enter element to be found";
    cin>>target;
    linearsearch(n,arr,target);
    cout<<endl;
    add(n,arr);
    cout<<endl;
    cout<<"enter num and pos of element to be inserted";
    cin>>num>>pos;
    insertion(n,arr,pos,num);
    cout<<"after insertion"<<endl;

     for(int i=0;i<n+1;i++)
     {
         cout<<arr[i]<<endl;
     }
    cout<<"reverse array"<<endl;
     int start=0;
     int end=n-1;
     while(start<end)
     {
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
     }
     for(int i=0;i<n;i++)
     {
         cout<<arr[i]<<endl;
     }
/*cout<<"sort"<<endl;
     while(start<end)
     {
        if(arr[i]>arr[i+1])
        {
             int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
     }*/
    
    delete [] arr;
    return 0;
}