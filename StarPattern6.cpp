#include<iostream>
using namespace std;

int main()
{
  int n;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  
  for(int i=0; i<n; i++)
	{        
    	for(int j=0; j<i; j++)
    	{
    	    printf(" ");
    	}
    	        
    	for(int k=0; k<2*n-2*i-1; k++)
    	{
    	    printf("*");
    	}
    	        
    	printf("\n");        
	}
}
