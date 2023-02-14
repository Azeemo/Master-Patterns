#include<iostream>
using namespace std;
int main()
{
	//int i = 1
	
	int n ;
	cout<<"enter the no. of rows of stars to be printed "<<endl;
	cin>>n;
	
	for  (int i=1;i<=n;i++){
			int j = 1;
		 while (j<=i)
		{
		
			cout<<"*";
			j++;
		}
	
	
		//i++;
	}
	
	cout<<"HENCE IT IS THE REQUIRED PATTERN "<<endl;
	
	
	return 0 ;
}
