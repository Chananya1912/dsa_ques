#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<char>vec1={'a','b','c'};
for(char i: vec1)
{
    cout<<i<<endl;
}
int n,x,k,j;
cout<<"enter number of terms"<<endl;
cin>>n;
vector<int>vec(n);
cout<<"enter elements in vector"<<endl;
for(int i=0;i<n;i++)
{
    cin>>vec[i];
}
cout<<"vector"<<endl;
for(int i:vec)
{
    cout<<i<<endl;
}
cout<<"element index"<<vec[2]<<endl;
vector<int>vec2;
vec2.push_back(10);
vec2.push_back (20);
vec2.push_back(30);
vec2.push_back(40);
for(int i :vec2)
{
    cout<<i<<endl;
}
cout<<"size of vec2 is:"<<vec2.size();
cout<<"check empty or not:"<<vec2.empty()<<endl;
cout<<"enter element and pos";
cin>>x>>k;
vec2.insert(vec2.begin()+k,x);
for (int i:vec2)
{
    cout<<i<<endl;
}
cout<<"pos to be erased";
cin>>j;
vec2.erase(vec2.begin()+j);
for (int i:vec2)
{
    cout<<i<<endl;
}
//sorting
sort(vec2.begin(),vec2.end());
cout<<"sorted vector";
for (int i:vec2)
{
    cout<<i<<endl;
}
return 0;
}