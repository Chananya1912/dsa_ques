#include<iostream>
using namespace std;
int main(){
for(int i=0;i<3;i++)
{
    for(int j=0;j<4;j++)
    {
        cout<<("*");
    }
cout<<endl;
}
cout<<endl<<"next"<<endl;
for (int i=0;i<3;i++)
{
    for(int j=0;j<=i;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
cout<<endl<<"next"<<endl;
for (int i=0;i<3;i++)
{
    for(int j=i;j<3;j--)
    {
        cout<<"*";
    }
    cout<<endl;
}
}
