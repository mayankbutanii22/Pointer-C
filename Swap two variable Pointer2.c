#include<stdio.h>
void swap(int *x, int *y){
   	int temp = y;
   	x = y;
   	y = temp;
}
int main(){
	int x=5;
	int y=3;
	
	swap(&x,&y);
	printf("%d %d",x,y);
	
	printf("\n%d %d",y,x);	
}