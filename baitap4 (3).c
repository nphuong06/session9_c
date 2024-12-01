#include<stdio.h>
#include<stdlib.h>
int main(){
	int numbers[10], count, n, choice;
	do{
	printf("\nhay chon chuc nang: \n");
	printf("1. nhap vao mang\n");
	printf("2. hien thi mang\n");
	printf("3. them phan tu\n");
	printf("4. sua phan tu\n");
	printf("5. xoa phan tu\n");
	printf("6. thoat\n");
	printf("nhap chuc nang tai day: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			for(int i = 0; i < 10; i++){
				printf("vui long nhap phan tu numbers[%d]: ", i);
				scanf("%d", &numbers[i]);
			}
			break;
		case 2:
			for(int i = 0; i < 10; i++){
				printf("phan tu numbers[%d] la: %d\n", i, numbers[i]);
			}
			break;
		case 3:
			printf("vui long vi tri muon chen phan tu: ");
			scanf("%d", &n);
			for(int i = 10; i >=n; i++){
				numbers[i] = numbers[i-1];
			}
			printf("vui long nhap phan tu: ");
			scanf("%d", &numbers[n]);
			break;
		case 4:
			printf("vui long nhap vi tri muon sua: ");
			scanf("%d", &n);
			if(n < 0 || n > 10){
				printf("vi tri sua khong hop le ");
			}
			printf("vui long nhap phan tu: ");
			scanf("%d", &numbers[n]);
			break;
		case 5:
			printf("vui long nhap vi tri muon xoa phan tu: ");
			scanf("%d", &n);
			if(n < 0 || n > 10){
				printf("vi tri xoa khong hop le ");
			}
			for(int i = n; i < 10; i++){
				numbers[i] = numbers[i+1];
			}
			break;
		case 6:
			exit(0);
			break;
		}
	}
	while(choice != 6);
}
