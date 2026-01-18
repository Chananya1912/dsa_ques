#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter rows and columns";
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++){
        
        cin>>arr[i][j];
        
    }}
    cout<<"array is"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
{
        cout<<arr[i][j]<<" ";
}
cout<<endl;
    }


}