#include <stdio.h>
#include <string.h>

int main(){
    FILE *f;
    char chuoi[100];
    printf("nhap chuoi de viet them vao file: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    f = fopen("bt01.txt","a");
    if(f == NULL){
        printf("loi mo tap tin");
        return 1;
    }
    fputs(chuoi, f);
    fclose(f);
    printf("da ghi du lieu them thanh cong");
    return 0;
}