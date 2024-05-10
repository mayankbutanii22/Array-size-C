#include<stdio.h>
main()
{
    int x=0;
    int a[5]={0,1,2,3,4};
    int b[3]={0,1,2};
    int c[8];
    int z=0;
    
    printf("Enter A's array size: ");
    for(x=0; x<5; x++){
    	scanf("%d",&a[x]);
	}
	a[0] = 7;
    a[1] = 4;
    a[2] = 9;
    a[3] = 5;
    a[4] = 2;
    
    printf("\nEnter array A's elements: ");
	for(x=0; x<5; x++){
		printf("\na[%d]= %d\n",x,a[x]);
		c[z]=a[x];
		z++;  
	}
	 printf("\nEnter B's array size: ");
    for(x=0; x<3; x++){
    	scanf("%d",&b[x]);
	}
	b[0] = 1;
    b[1] = 3;
    b[2] = 6;
    printf("\nEnter array B's elements: ");
	for(x=0; x<3; x++){
		printf("\nb[%d]= %d\n",x,b[x]);
			c[z]=b[x];
		    z++; 
		
	}
	printf("\nArray C is: ");

	for(x=0; x<8; x++){
		printf("%d,",c[x]);
   }
}