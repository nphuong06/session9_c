#include<stdio.h>
#include<stdlib.h>
int main(){
	int choice, min, max, count, sum, n, a = 100, numbers[a], j;
	do{
		printf("\n1. nhap so phan tu va cac phan tu\n");
		printf("2. in ra cac phan tu\n");
		printf("3. in ra cac phan tu chan va le\n");
		printf("4. in ra gia tri lon nhat va nho nhat\n");
		printf("5. kiem tra xem phan tu xuat hien bao nhieu lan\n");
		printf("6. them mot phan tu vao vi tri co dinh\n");
		printf("7. in ra phan tu so nguyen so va tinh tong\n");
		printf("8. thoat\n");
		printf("vui long nhap tinh nang: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				printf("nhap so phan tu cua mang: ");
				scanf("%d", &n);
				a = n;
				for(int i = 0; i < n; i++){
					printf("nhap phan tu numbers[%d]: ", i);
					scanf("%d", &numbers[i]);
				}
				break;
			case 2:
				for(int i = 0; i < n; i++){
					printf("phan tu numbers[%d] la: %d\n", i, numbers[i]);
				}
				break;
			case 3:
				for(int i = 0; i < n; i++){
					if(numbers[i] % 2 == 0){
						printf("so chan trong mang la: %d\n", numbers[i]);
					}
					else{
						printf("so le trong mang la: %d\n", numbers[i]);
					}
				}
				break;
			case 4:
				max = numbers[0], min = numbers[0];
				for(int i = 0; i <n; i++){
					if(max < numbers[i]){
						max = numbers[i];
					}
					if(min > numbers[i]){
						min = numbers[i];
					}
				}
				printf("so lon nhat va nho nhat trong mang la: %d va %d", max, min);
				break;
			case 5:
				printf("nhap phan tu muon kiem tra: ");
				scanf("%d", &j);
				for(int i = 0; i < n; i++){
					if( j == numbers[i]){
						count++;
					}
				}
				printf("phan tu %d xua hien %d lan", j, count+1);
				break;
			case 6:
				printf("nhap vi tri muon them phan tu: ");
				scanf("%d", &j);
				for( int i = n; i >= j; i--){
					numbers[i] = numbers[i-1];
				}
				printf("nhap phan tu muon them: ");
				scanf("%d", &numbers[j]);
				break;
			case 7:
				for(int i = 0; i < n; i++){
					count = 0;
					for (int k = 1 ; k <= numbers[i]; k++){
						if(numbers[i] % k ==0){
							count++;
						}
					}
					if(count == 2){
						printf("%d\n", numbers[i]);
						sum += numbers[i];
					}
				}
				printf("tong cac so nguyen to la: %d", sum);
				break;
			case 8:
				exit(0);
		}
	}
	while(choice != 8); 
	return 0;
}
