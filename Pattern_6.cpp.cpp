#include<iostream>
using namespace std;
int main()
{
	int i = 0;
   int n ;
   cout<<"enter the no. of rows ";
   cin>>n;
   
cout<<"hence the total no. of rows "<<n<<endl;

while(i<=n)
{
	int j =1 ;
	while(j<=(n-i)){
		cout<< " * ";
		j++;
	}
	cout<<endl;
	i++;
}

	
	return 0 ;
}
