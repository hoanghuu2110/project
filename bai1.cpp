#include <stdio.h>

int main(){
	int n, arr[100];
	printf("Nhap so pt mang: ",n);
	scanf("%d",&n);
	
	for ( int i = 0; i < n; i++){
		printf("\nNhap gia tri cac pt: ",arr[i]);
		scanf("%d",&arr[i]);
	}
	
	for ( int i = 0; i < n; i++){
		if(arr[i] % 2 == 0 ){
			printf ("\nSo chan tim duoc trong mang la:%d",arr[i]);
		}
	}
	return 0;
}