#include<stdio.h>
int main(){
	int numbers[10] = {1,2,4,5}, n;
	printf("nhap vi tri muon xoa: ");
	scanf("%d", &n);
	for(int i = n; i < 10; i++){
		numbers[i] = numbers[i+1];
	}
	for(int i = 0; i < 10; i++){
		printf("%d\n", numbers[i]);
	}
	return 0;
}
