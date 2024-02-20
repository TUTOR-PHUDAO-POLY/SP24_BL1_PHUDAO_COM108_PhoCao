/**
 *  1. Nhập vào tên, địa chỉ, quê quán của bản thân và in ra màn hình (chuoi - char,chuoi, chuoi) => gets
    2. Nhập vào tuổi, cân nặng, chiều cao của nyc và in ra màn hình(int, float, int) => scanf
    3. Nhập vào tên, tuổi, địa chỉ, quê quán, ngành học của bản thân và in ra màn hình
    (chuoi, int, chuoi, chuoi) => gets, scanf, scanf
 */ 
#include <stdio.h>

int main()
{
    // B1: Nhap dư liệu từ bàn phím 
    // Nhap => so(so nguyen/so thuc): nhap 2 so nguyen duong, diem toan,ly hoa...
    char name[50]; // Xau ky tu 
    printf("Moi nhap ten tu ban phim:");
    // scanf => dung vs so 
    // gets => Dung cho ky tu 
    gets(name);
    char diaChi[100];
    printf("Moi nhap dia chi :");
    gets(diaChi);
    char quequan[20];
    printf("Nhap que quan :");
    gets(quequan);
    // B2: In các gia trị vừa nhập
    printf("Ten la %s\n", name);
    printf("Dia chi la %s\n", diaChi);
    printf("Que quan la %s\n", quequan);

    return 0;
}
