#include <stdio.h>
  int factorial(int);  // declaration
void main()
{
	int fact,ans,n;
printf("enter a number for factorial\n");
scanf("%d" , &n);
 ans=factorial(n); 
 printf ("ans=%d" , ans); 
}

 int factorial(int n)

{
	 int number=1;
	for (int   i=1; i<=n; ++i)
	{
	      number=number*i;
	   
	}
	   return number;
}