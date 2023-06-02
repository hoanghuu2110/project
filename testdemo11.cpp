#include <stdio.h>

int main(){
	int arry[5]={5,7,3,1,1};
	int sum = 0;
	 for ( int i = 0; i <5;i++){
	 sum = sum + arry[i];
	 }
	printf("%d",sum);
	return 0;
}