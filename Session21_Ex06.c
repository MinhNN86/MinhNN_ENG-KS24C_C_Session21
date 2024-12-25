#include <stdio.h>

int main(){
    char duLieu;
    FILE *f1, *f6;
    f1 = fopen("bt01.txt","r");
    if(f1 == NULL){
        printf("loi khi mo file bt01.txt");
        return 1;
    }
    f6 = fopen("bt06.txt","w");
    if(f6 == NULL){
        printf("loi khi mo file bt06.txt");
        fclose(f1);
        return 1;
    }
    while ((duLieu = fgetc(f1)) != EOF){
        fputc(duLieu, f6);
    }
    printf("da sao chep tu bt01.txt sang bt06.txt");
    fclose(f1);
    fclose(f6);
}