#include<iostream>
using namespace std;
int main()
{
	
int i = 1;
int n;
cout<<"enter the no. of rows "<<endl;
cin>>n;

while(i<=n)
{
      if   ((i==1)||(i==n))
   {
   	cout<<" * * * *"<<endl;
   	 //i++;
	}

else  { 
	int j =0;
   int k = 1;
	
	while(k<n)
	{
	        j = j +1;
		if ((j==1)||(j==(n-1)))
		{
			cout<<" *";
		k++;
		}
		else {
			cout<<"  ";
			k++;
		
		}
			
	}	

	}	
		cout<<endl;
	i++;
	}
	return 0 ;}
	
	
	
	/*
	#include<iostream>
using namespace std;
int main()
{
int i = 1;
//int j = 1;
int n ;
cout<<"enter the no. of rows ";
cin>>n;

if ((i<=n)&&((i==1)||(i==n)))
   	
 {
 	cout<<"****"<<endl;
 }
 int k = 1;
while(i<=(n-1))
 {
 	if ((k==1)||(k==(n-1)))
 	cout<<"*";
 	
 	else{
	 
 		cout<<"_";}
	
	 k++;
 }
 i++;
 
 	return 0 ;
 
}	
	
	*/
	
	


