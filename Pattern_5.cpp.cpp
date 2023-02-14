#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	int n ;
	cout<<"enter the no. of rows "<<endl;
	cin>>n;
	
	while(i<=n)
	{
		int k =1;
		while(k<=i){
			cout<<i<<" ";
			k++;
		}
		while (k<=(n-i)){
			cout<<" ";
			k++;
		}
		cout<<endl;
		i++;
	}
	
	
	
	return 0 ;
}
