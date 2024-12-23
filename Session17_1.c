#include<stdio.h>
void menu();
void inputArr(int *aPtr,int *size);
void printArr(int *aPtr,int *size);
void lengthArr(int *aPtr,int *size);
void sumArr(int *aPtr,int *size);
void maxNum(int *aPtr,int *size);
int main(){
	int choice=0;
	int size;
	int arr[100];
	int flag =0;

do{
	menu();	

	printf("Nhap lua chon cua ban : ");
	scanf("%d",&choice);
	fflush(stdin);
	switch(choice){
		case 1:
		  flag =1;
			inputArr(arr,&size);
			break;
		case 2:
				if(flag==1){
					printArr(arr,&size);	
				}	else{
					printf("Moi ban nhap mang truoc");
				}
			break;
		case 3:
			if(flag==1){
				lengthArr( arr,&size);
				
			}else{
				printf("Moi ban nhap mang truoc");
			}
			break;
		case 4:
			sum(arr,&size);
			break;
		case 5:
			maxNum(arr,&size);
			break;
						
	}
}while(choice!=6);

return 0;

}
void menu(){
	printf("\nMenu\n");
	printf("1. nhap vao so phan tu va tung pha tu\n");
	printf("2. hien thi cac phan tu trong mang\n");
	printf("3. tinh do dai mang\n");
	printf("4. tinh tong cac phan tu trong mang\n");
	printf("5. hien thi phan tu lon nhat\n");
	printf("6. Thoat\n");
	}
inputArr(int *aPtr,int *size){
	printf("nhap mang : ");
	scanf("%d",&*size);
	for(int i =0;i<*size;i++){
		printf("nhap phan tu thu %d : ",i+1);
		scanf("%d",&*(aPtr + i));
	}
}
printArr(int *aPtr,int *size){
	for(int i=0;i<*size;i++){
		printf("%d ",*(aPtr+i));
	}
}
lengthArr(int *aPtr,int *size){
	printf("%d",*size);
}
sum(int *aPtr,int *size){
	int sum =0;
	for(int i =0;i<*size;i++){
		sum+=*(aPtr  +i);
	}
	printf("%d",sum);
}
maxNum(int *aPtr,int *size){
	int max = 0;
	for(int i =0;i<*size;i++){
		if(*(aPtr+i)>max){
			max = *(aPtr + i);
		}
		
	}
	printf("%d",max);
}

