#include<iostream>
using namespace std;
int main()
{
    cout<<"enter n";
    int n;
    cin>>n;
    int tlen=0;
    string arr[n];
    for(int i =0; i<n;i++)
    {
        cin>>arr[i]; 
        tlen+=arr[i].length();
    }

cout<<tlen<<endl;
//next ques
cout<<"next ques"<<endl;
string var;
cout<<"enter email";
cin>>var;
for(int i =0;i<var.length();i++)
{
   
    if(var[i] == '@' )
{
    break;
}
cout<<var[i];
}
}