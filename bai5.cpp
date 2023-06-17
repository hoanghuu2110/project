#include <stdio.h>

int isPreme(int num){
	if (num <= 1){
		return 0;
	}
	for ( int i = 2; i <= num / 2;i++){
		if ( num % i ==0){
			return 0;
		}
	}
	return 1;
}

int main (){
	int arr[5];
	int max , min;
	int num;
	
	printf ("Nhap 5 so nguyen to:\n");
	
	for ( int i = 0; i < 5; i++){
		printf ("so %d:", i + 1);
		scanf ("%d", &num);
		
		if (!isPreme(num)){
			printf("so nhap vao khong phai la so nguyen to. vui long nhap lai.");
			i--;
			continue;
		}
		arr[i] = num;
	}
	
	// so nho nhat va so lon nhat
	max = arr[0];
	min = arr[0];
	for( int i = 0; i < 5;i++){
		if ( arr[i] > max){
			max = arr[i];
		}
		
		if ( arr[i] < min ){
			min = arr[i];
		}
	}
		
	
	printf("Cac phan tu trong mang: \n");
	for( int i = 0; i < 5; i++){
		printf("%d", arr[i]);
	}
	
	printf("\n\nPhan tu lon nhat: %d\n", max);
	printf("phan tu nho nhat: %d", min);
	return 0;
}