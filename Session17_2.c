#include<stdio.h>
void menu();
void inputArr(char *aPtr,int size);
void printArr(char *aPtr,int size);
void  countArr(char *aPtr,int size);
int main(){
	int choice;
	char arr[100];
	int size = 100;
do{
	menu();
		printf("Nhap vao lua chon cua ban : ");
		scanf("%d",&choice);
		getchar();
	switch(choice){
		case 1:
			inputArr(arr,size);
			break;
		case 2:
			printArr(arr,size);
		break;
		case 3:
			countArr(arr,size);
		break;
		case 4:
		break;
		case 5:
		break;	
		}
} while(choice!=6);



return 0;

}
void menu(){
	printf("\nmenu\n");
	printf("1. Nhap vao chuoi\n");
	printf("2. in ra chuoi\n");
	printf("3. dem so luong chu cai trong chuoi va in ra\n");
	printf("4. dem so luong so trong chuoi va in ra \n");
	printf("5. dem so luong ki tudac biet trong chuoi va in ra\n");
	printf("6. Thoat\n");
}
void inputArr(char *aPtr,int size){
		printf("moi ban nhap chuoi ki tu : ");
		fgets(aPtr,size,stdin);
		
}
void printArr(char *aPtr,int size){
		printf("%s",aPtr);
	
}
void  countArr(char *aPtr,int size){
	int count=0;
	for(int i =0;i<size;i++){
			if(isalpha(*(aPtr+i)){
		count ++;
	}
	}

	printf("%d",count);
}
