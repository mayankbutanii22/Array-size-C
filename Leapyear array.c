#include<stdio.h>
main()
{
	int first=2020;
	int last=2040;
	int leapyear;
	int x;
	
    printf ("Enter the first number: ");  
    scanf ("%d", &first);  
    printf ("Enter the second number: ");  
    scanf ("%d", &last);  
    printf ("\nThe array is: ", &first, &last);  
    for (x=first; x<=last; x++)   
    {  
         if(x%4==0 && x%100!=0)  
         {  
          printf("%d, ",x);  
         }   
    }  
}