#include<stdio.h>
#include<stdlib.h>
int main(){
	int a = 50, b = 50, numbers[a][b], sum, tich, choice, row, col, max, maxRow[50], index = 0;
	do{
	printf("\n1. nhap kich co va gia tri cac phan tu trong mang\n");
	printf("2. in cac phan tu trong mang theo ma tran\n");
	printf("3. in ra cac phan tu le va tinh tong\n");
	printf("4. in ra cac phan tu nam tren duong bien va tinh tich\n");
	printf("5. in ra cac phan tu nam tren truong cheo chinh\n");
	printf("6. in ra cac phan tu nam tren duong cheo phu\n");
	printf("7. in ra dong co tong lon nhat\n");
	printf("8. thoat\n");
	printf("nhap chuc nang: ");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("nhap so hang: ");
			scanf("%d", &row);
			printf("nhap so cot: ");
			scanf("%d", &col);
			a = row, b= col;
			for(int i = 0; i < row; i++){
				for(int j = 0; j < col; j++){
					printf("nhap phan tu numbers[%d][%d]: ", i, j);
					scanf("%d", &numbers[i][j]);
				}
			}
			break;
		case 2:
			printf("in mang theo ma tran: \n");
			for(int i = 0; i < row; i++){
				for(int j = 0; j < col; j++){
					printf("%d ", numbers[i][j]);
				}
			printf("\n");
			}
			break;
		case 3:
			for(int i = 0; i < row; i++){
				for(int j = 0; j < col; j++){
					if(numbers[i][j] % 2 != 0){
						printf("%d\n", numbers[i][j]);
						sum += numbers[i][j];
					}
				}
			}
			printf("tong cac so le la: %d", sum);
			break;
		case 4:
			printf("phan tu nam o bien tren la:\n");
			for(int j = 0; j < col; j++){
				printf("%d\n", numbers[0][j]);
				tich *= numbers[0][j];
			}
			printf("phan tu nam o bien duoi la:\n");
			for(int j = 0; j < col; j++){
				printf("%d\n", numbers[row-1][j]);
				tich *= numbers[row-1][j];
			}
			printf("phan tu nam o doc bien phai la:\n");
			for(int i = 0; i < row; i++){
				printf("%d\n", numbers[i][col-1]);
				tich *= numbers[i][0];
			}
			printf("phan tu nam o doc bien trai la:\n");
			for(int i = 0; i < row; i++){
				printf("%d\n", numbers[i][col-1]);
				tich *= numbers[i][col-1];
			}
			printf("tich cac phan tu nam tren bien la: %d", tich);
			break;
		case 5:
			printf("cac phan tu nam tren duong cheo chinh la:\n");
			for(int i = 0; i < row; i++){
				printf("%d\n", numbers[i][i]);
			}
			break;
		case 6:
			printf("cac phan tu nam tren deo cheo phu la:\n");
			int j = col - 1;
			for(int i = 0; i < row; i++){
				printf("%d\n", numbers[i][j]);
				j--;
			}
			break;
		case 7:
			for(int i = 0; i < row; i++){
				sum = 0;
				for(int j = 0; j < col; j++){
					sum += numbers[i][j];
				}
				maxRow[i] = sum;
			}
			max = maxRow[0];
			for(int i = 0; i < row; i++){
				if(maxRow[i] > max){
					max = maxRow[i];
					index = i;
				}
			}
			printf("hang co tong lon nhat la: %d", index+1);
			break;
	}
}
	while(choice != 8);
	return 0;
}
