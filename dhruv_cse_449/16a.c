#include <stdio.h>
void main ()
{     int n,num,positive=0,negative=0;  // inicilization is compolsory
	printf ("enter n\n");  // array size
	scanf("%d" , &n);
	int a[n];
     

     for (int i = 0; i<n; ++i)
     {
        printf("enter anumber\n");  // element of an array
        scanf("%d" , &num);


        if(num>0) //consider zero as positive
        {
        	//printf("num is positive\n");
        	positive=positive+1;
        }

        else {

        	//printf("num is negative\n");
                     negative=negative+1;
        }

     }
    printf ("\npositive=%d" ,positive);
    printf ("\nnegative=%d" , negative);
}