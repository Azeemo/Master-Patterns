#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   //cout<<"enter the value of n"<<endl;
  cin>>n;  
  int m =n;
  int o = n;
  
   for(int i =1;i<=n;i++)
{
   for(int g = 1;g<=n-o;g++)
  {
    cout<<"  ";
  }
   for(int j =m;j>=1;j--)
{
    cout<<j<<" ";
                           } 
m--;
for(int k = 0;k<=o;k++)
{
   cout<<k<<" ";
}
o--;
   for(int g = 1;g<=n-o;g++)
  {
    cout<<"  ";
  }
cout<<endl;
cout<<"            0      ";
cout<<endl;
int q = n;
int w = n;

 for(int i =1;i<=n;i++)
{
   for(int g = 1;g<=q-1;g++)
  {
    cout<<"  ";
  }
  q--;
  for(int k = i ;k>=0;k--)
{
   cout<<k<<" ";
}

   for(int j =1;j<=i;j++)
{
    cout<<j<<" ";
                           } 


   for(int g = 1;g<=n-w;g++)
  {
    cout<<"  ";
  }
cout<<endl;
}
   return 0 ;
}