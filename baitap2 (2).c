#include<stdio.h>
int main(){
	int numbers[10] = {1,2,4,5}, n, x;
	printf("nhap vi tri muon chen: ");
	scanf("%d", &n);
	printf("nhap phan tu: ");
	scanf("%d", &numbers[n]);
	for(int i = 0; i < 10; i++){
		printf("%d\n", numbers[i]);
	}
	return 0;
}
 
