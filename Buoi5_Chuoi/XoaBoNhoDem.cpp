// 3. Nhập vào tên, tuổi, địa chỉ, quê quán, ngành học của bản thân và in ra màn hình
// (chuoi, int, chuoi, chuoi) => gets, scanf, scanf
#include <stdio.h>

int main()
{
    // B1: Nhap
    char ten[100];
    printf("Moi nhap vao ten:");
    gets(ten);
    int tuoi;
    printf("Moi nhap tuoi:");
    scanf("%d",&tuoi);
    fflush(stdin); // XOA NHO BO DEM => BO QUA KHOANG TRANG DE CHO PHEP NHAP GIA TRI TIEP THEO 
    char diaChi[100];
    printf("Moi nhap vao dia chi:");
    gets(diaChi);
    char queQuan[100];
    printf("Moi nhap vao que quan:");
    gets(queQuan);
    char nganhHoc[100];
    printf("Moi nhap vao nganh hoc:");
    gets(nganhHoc);
    
    // B2: In 
    printf("Ten = %s - Tuoi = %d - Dia chi = %s - Que quan = %s - Nganh hoc = %s", 
            ten, tuoi, diaChi, queQuan, nganhHoc);
    return 0;
}
