#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"Enter two diferents array size:";
cin>>x;
cin>>y;
int A[x];
int B[y];
int C[x+y];

cout<<"Enter elements for A array:";
for(int i=0; i<x; i++)
{
 cin>>A[i];
}
cout<<"Enter elements for B array:";
for(int j=0; j<y; j++)
{
 cin>>B[j];
}
cout<<endl;

for(int i=0; i<x; i++)
{
  C[i]=A[i];
}
int j=0;
for(int i=x; i<y+x; i++)
{
  C[i]=B[j];
  j++;
}
cout<<"A:";
for(int i=0;i<x;i++){
    cout<<A[i]<<"   ";
}
cout<<endl;

cout<<"B:";
for(int j=0;j<y;j++){
    cout<<B[j]<<"   ";
}
cout<<endl;
//cout<<"New array:"<<endl;
//for(int i=0;i<x+y; i++)
//{
 //cout<<C[i];
//}
for(int i=x+y-1;i>=0; i--)
{
 cout<<C[i]<<"   ";
}
return 0;
}
