#include<bits/stdc++.h>
using namespace std;
int main()
{
int i = 1;
int n;
cout<<"enter the no. of rows "<<endl;
cin>>n;
while (i<=n){
		
	int j = 1 ;
	while (j<=(n-i)){
		cout<<"   ";
		j++;
	}
int k = 1;
 while  (k<=i)
	{
	cout<<" * ";
           k++;
                  }
cout<<endl;
i++; 
 
	}
	return 0;
	}
	
	
	
	
	
	
	


