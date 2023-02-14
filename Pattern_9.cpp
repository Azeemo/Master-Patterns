#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cout<<"enter the value of n"<<endl;
  cin>>n;
  
 cout<<"1"<<" ";
 cout<<endl;
   for(int i =1;i<=n;i++)
{
	
	for(int j=1;j<=i;j++)
	{
		if(j==1)
			{cout<<i<<" ";}
		
		 if(j==i)
		cout<<i<<" ";
	else
    cout<<"0"<<" ";

	}
cout<<endl;                           
}


	return 0 ;
}