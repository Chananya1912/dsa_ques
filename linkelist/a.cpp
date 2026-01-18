#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<char>input;
    vector<char>output;
    int n=input.lenght();

    for(int i=0;i<n;i++)
    {
        if(i != 'a'||i!='e'||i !='i' || i!='o' i!='u')
        {
          output.push_back(i);
        }
    }
    cout<<output;
}