#include <stdio.h>

int main(){
	int intArr[10];
	int i;
	int min, max;
	int countmin = 0, countmax= 0;
	min = max = intArr[0]; //Gán min và max ban đầu là phần tử đầu tiên của mảng
	
	printf ("Nhap pt mang intArr:\n",intArr);
	for ( i = 0; i < 10; i++){
		scanf ("%d",&intArr[i]);
	}
	
	for ( i = 0; i < 10; i++){
		if ( intArr[min] < min){
			min = intArr[i];
			countmin= 1;
		}
		else if ( intArr[i] == min){
			countmin++;
		}
		
		if ( intArr[i] > max){
			max = intArr[i];
			countmax= 1;
		}
		else if ( intArr[i] == max){
			countmax++;
		}
	}
	
	printf("Gia tri nho nhat: %d\n", min);
    printf("So lan xuat hien cua gia tri nho nhat: %d\n", countmin);
    printf("Gia tri lon nhat: %d\n", max);
    printf("So lan xuat hien cua gia tri lon nhat: %d\n", countmax);

		
	return 0;
}