#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int numbers[100],currentIndex=0,sum=0,min,max;
	int i,j;
	int size=sizeof(numbers)/sizeof(int);
	int key,size1,temp;
	int so_le_chia_het_cho_5,so_chan_chia_het_cho_5,con_lai;
	do{
		printf("************************MENU**************************\n");
		printf("1. Nhap gia tri n phan tu cua mang (n nhap tu ban phim)\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. Tinh tong cac phan tu chia het cho 2 và 3 trong mang\n");
		printf("4. In ra gia tri phan tu lon nhat va nho nhat trong mang\n");
		printf("5. Su dung thuat toan sap xep chen sap xep mang tang dan\n");
		printf("6. Tinh tong cac phan tu là so nguyen to trong mang\n");
		printf("7. Sap xep cac phan tu le chia het cho 5 o dau mang theo thu tu giam dan, cac phan tu chan chia het cho 5 o cuoi mang theo thu tu tang dan, cac phan tu con lai o giua mang theo thu tu giam dan\n");
		printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xep tang dan) dung vi tri\n");
		printf("9. Thoat\n");
		int choice;
		printf("Vui long nhap lua chon:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap kich co can nhap cua mang");
				scanf("%d",&size);
				printf("Nhap gia tri cua phan tu trong mang:\n");
				for(i=0;i<size;i++){
					printf("numbers[%d]=",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2:
				for(i=0;i<currentIndex;i++){
					printf("%d",numbers[i]);
				}
				printf("\n");
				break;
			case 3:
				for(i=0;i<currentIndex;i++){
					if(numbers[i]%2==0&&numbers[i]%3==0){
						sum+=numbers[i];
					}
				}
				printf("tong cac phan tu chia het cho 2 và 3 trong mang la:%d",sum);
				printf("\n");
				break;
			case 4:
				min=numbers[0];
				max=numbers[0];
				for(i=0;i<currentIndex;i++){
					if(max<numbers[i]){
						max=numbers[i];
					}
					if(min>numbers[i]){
						min = numbers[i];
					}
				}
				printf("Max la %d va Min la %d",max,min);
				printf("\n");
				break;
			case 5:
				for(i=1;i<currentIndex;i++){
					key = numbers[i];
					j=i-1;
					while(j>=0&&numbers[j]<key){
						numbers[j+1]=numbers[j];
						j-=1;
					}
					numbers[j]=key;
				}
				printf("mang sau khi sap xep:");
				for(i=0;i<currentIndex;i++){
					printf("numbers[%d]=%d",i,numbers[i]);
				}
				printf("\n");
				break;
			case 6:
				for(i=0;i<currentIndex;i++){
					int isPrime=0;
					if(numbers[i]>=2){
						for(j=2;j<=sqrt(numbers[i]);j++){
							if(numbers[i]%j==0){
								isPrime=1;
								break;
							}
						}
					}else{
						isPrime=1;
					}
					if(isPrime==0){
						printf("%d la so nguyen to\n",numbers[i]);
						sum+=numbers[i];
					}
				}
				printf("Tong la %d",sum);
				printf("\n");
				break;
			case 7:
				for(i=0;i<currentIndex;i++){
					if(numbers[i]%2!=0&&numbers[i]%5==0){
						so_le_chia_het_cho_5=numbers[i];
						size1=sizeof(so_le_chia_het_cho_5)/sizeof(int);
						for(i=0;i<size1-1;i++){
							for(j=0;size1-i-1;j++){
								if(numbers[j]>numbers[j+1]){
									temp=numbers[j];
									numbers[j]=numbers[j+1];
									numbers[j+1]=temp;
								}
							}
						}
					}else if(numbers[i]%2==0&&numbers[i]%5==0){
						so_chan_chia_het_cho_5=numbers[i];
						int size2=sizeof(so_chan_chia_het_cho_5)/sizeof(int);
						
					}else{
						con_lai=numbers[i];
					}
				}
				printf("sap xep:%d %d %d",so_le_chia_het_cho_5,con_lai,so_chan_chia_het_cho_5);
				printf("\n");
				break;
			case 8:
				break;
			case 9:
				exit(0);
				break;
			default:
				printf("Vui long nhap lua chon:");
		}
	}while(1==1);
} 
