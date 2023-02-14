#include<iostream>
using namespace std;
int main()
{
	int i =1 ;
	int n ;
	cout<<"enter the no. of rows you want "<<endl;
	cin>>n;
	
	while (i<=n)
	{
	int j = 1;
	while(j<=4){
		cout<<"*"<<" ";
		j++;
	}
	cout<<endl;
	i++;
	}
	
	
	
	
	return 0 ;
}
