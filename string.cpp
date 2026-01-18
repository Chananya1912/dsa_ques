#include<iostream>
using namespace std;
int main()
{
    string fullname;
    cout<<"enter full name";
   getline(cin,fullname);
    cout<<fullname<<endl;
//concatenate
    string n="abc";
    string m="mqa";
    string q = n+ " "+m;
    cout<<q<<endl;;
//length
    cout<<"lenght of string is"<<fullname.length()<<endl;
//access each element
    for(int i =0;i<fullname.length();i++)
    {
        cout<<fullname[i]<<endl;
    }
//compare
int result=n.compare(m);
if(result==0)
{
    cout<<"string equal";
}
else if(result<0)
{
    cout<<"string 1 less";
}
else
{
    cout<<"string 2 is less";
}
if(n==m)
{
    cout<<"equal";
}
cout<<endl;
//substring
string substring = fullname.substr(3,7);
cout<<substring;

    return 0;
}