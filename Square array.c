#include<stdio.h>
main()
{
	int x,square;
	int a[5]={0,1,2,3,4};
	printf("Enter array size: ");
	for(x=0; x<5; x++){
		scanf("%d",&a[x]);
	}
	a[0] = 7;
    a[1] = 4;
    a[2] = 9;
    a[3] = 5;
    a[4] = 2;
	printf("Enter array elements: ");
	for(x=0; x<5; x++){
		printf("\na[%d]= %d\n ",x,a[x]);
		
	}
	printf("\nThe squares are: ");
	for(x=0; x<5; x++){
	square = a[x] * a[x];
	printf("%d, ",square);
    }

}