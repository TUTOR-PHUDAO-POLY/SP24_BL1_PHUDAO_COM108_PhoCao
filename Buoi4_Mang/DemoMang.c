// Nhập mảng các số nguyên từ bàn phím và size n nhập từ bàn phím. 
// In các số trong mảng ra màn hình

#include <stdio.h>

int main(){
    int n;
    printf("Vui long nhap so luong phan tu:");
    scanf("%d",&n);
    int arr[n];
    printf("Moi nhap cac phan tu trong mang:");
    for(int i = 0 ; i < n; i++){
        scanf("%d",&arr[i]);
    }
    printf("In cac phan tu trong mang:");
    for(int i = 0; i< n ; i++){
        printf("%d",arr[i]);
    }
    return 0;
}
