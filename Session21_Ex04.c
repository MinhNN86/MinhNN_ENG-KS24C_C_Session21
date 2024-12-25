#include <stdio.h>

int main(){
    char xuatFile[100];
    FILE *f = fopen("bt01.txt","r");
    fgets(xuatFile, sizeof(xuatFile), f);
    fclose(f);
    printf("du lieu dong dau tien trong file la: %s", xuatFile);
    return 0;
}