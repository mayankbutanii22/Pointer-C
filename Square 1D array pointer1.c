#include<stdio.h>
void square(int *a[]){
	int x,size;
	
	for(x=0; x<size; x++){
		*a[x]=*a[x] * *a[x];
	}
	
}
int main(){
	int x,square;
	int a[5]={1,2,3,4,5};
	square = (&a[0]);

	printf("Enter the array's size: ");
	scanf("%d",&x);
		
	a[0] = 2;
    a[1] = 4;
    a[2] = 1;
    a[3] = 3;
    a[4] = 7;

    
	for(x=0; x<5; x++){
		a[x]=a[x]*a[x];
       printf("%d ",a[x]);
	}
}