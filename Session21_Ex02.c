#include <stdio.h>

int main(){
    int kyTu;
    FILE *f;
    f = fopen("bt01.txt", "r");
    kyTu = fgetc(f);
    printf("%c", kyTu);
    fclose(f);
    return 0;
}