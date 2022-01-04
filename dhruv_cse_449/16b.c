#include <stdio.h>
void main ()
{     int n,num,even=0,odd=0;  // inicilization is compolsory
	printf ("enter n\n");  // array size
	scanf("%d" , &n);
	int a[n];
     

     for (int i = 0; i<n; ++i)
     {
        printf("enter anumber\n");  // element of an array
        scanf("%d" , &num);


        if(num%2 == 0) //for even
        {
        	//printf("num is even\n");
        	even=even+1;
        }

        else {

        	//printf("num is odd\n");
                     odd=odd+1;
        }

     }
    printf ("\neven=%d" ,even);
    printf ("\nodd=%d" , odd);
}