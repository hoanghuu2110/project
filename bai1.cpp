#include <stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	printf("Nhap so:",num);
	
	if (num > 0){
		printf("So %d la so duong",num);
	}
	else if (num < 0 ){
		printf(" So %d la so am",num);
	}
	else{
		printf("La so khong am cung khong duong",num);
	}
	
	return 0;
}