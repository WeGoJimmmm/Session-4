#include<stdio.h>
int main ()
{
	int ar[10],i,v,n;
	printf("Enter the size of an array");
	scanf("%d",&n);
	printf("Enter the elements in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		
	}
	printf("Enter the value you want to find in array");
	scanf("%d",&v);
	for(i=0;i<0;i++)
	{
		if (ar[i]==v)
		printf("%d is found in the the array at location ar[%d]",v,i+1);
		
	else
	printf("Not found");
	
	}
	return 0;
}
	
