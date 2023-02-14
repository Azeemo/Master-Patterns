#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n ;
  cin>>n;
  int a[20];
  int k ;
  int count = 0 ;
  
 
 for(int i=0;i<=n;i++)
 {
    int row = pow(2,i) - 1;
   
   while(row>0){

  	 k = row%2;
  	 cout<<k;
  	row /2 ;
  }
  
}  
     
return 0 ;
}
/*op
1
11
111
1001
11111*/