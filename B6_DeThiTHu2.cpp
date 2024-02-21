#include <stdio.h>

void chanle(int i,int n){
	int tong=0;
	for(;i<n+1;i++){					
	tong=tong+i;	
	}
	if(tong%2==0){
		printf("\nTong = %d \nDay la so chan", tong);
	}else{
		printf("\nTong = %d \nDay la so le", tong);
	}
}

int main() {
	int menu;
	do{
		printf("\nMoi nhap menu: ");
		scanf("%d", &menu);
		switch(menu){
			case 1:{
				fflush(stdin);
				char name[100];
				printf("\nMoi nhap ho va ten: ");
				gets(name);
				
				char id[100];
				printf("\nMoi nhap mssv: ");
				gets(id);
				
				int mark;
				printf("\nMoi nhap diem: ");
				scanf("%d", &mark);
				
				printf("\nHo va ten: %s", name);
				printf("\nMSSV: %s", id);
				printf("\nDiem: %d", mark);
				break;
			}
			case 2:{
				int i=1;
				int n;
				printf("\nMoi nhap so nguyen: ");
				scanf("%d", &n);
				chanle(i,n);
				break;
			}
			case 3:{
				int size;
				printf("\nMoi nhap so luong tivi: ");
				scanf("%d", &size);
				int arr[100];
				printf("\nMoi nhap kich co tivi: ");
				for(int i=0;i<size;i++){
					scanf("%d", &arr[i]);
				}
				printf("\nSo luong tivi: %d", size);
				int min=arr[0];
				for(int i=0; i<size; i++){
					if(min>arr[i]){
					min=arr[i];
					}
				}
				int max=arr[0];
				for(int i=0;i<size;i++){
					if(max<arr[i]){
						max=arr[i];
					}
				}
				float tb=(float)(min+max)/2;
				printf("\nKich co trung binh cua tivi la: %0.1f inch", tb);
				printf("\nTivi co kich thuoc lon nhat la: %d inch", max);
				break;
			}
			default:{
				printf("\nChuc nang khong ton tai");
				break;
			}
		}
	}while(menu!=0);
	
	return 0;
}
