#include <stdio.h>

int main(){
    int soDong;
    printf("so dong can nhap vao file: ");
    scanf("%d", &soDong);
    fflush(stdin);
    FILE *f = fopen("bt05.txt", "w");
    if (f == NULL){
        printf("khong mo file duoc");
        return 1;
    }
    for(int i = 0; i < soDong; i++){
        char line[100];
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(f, "%s", line);
    }
    fclose(f);
    f = fopen("bt05.txt","r");
    if (f == NULL){
        printf("khong mo file duoc");
        return 1;
    }
    int ch;
    while((ch = fgetc(f)) != EOF){
        printf("%c", ch);
    }
    fclose(f);
    return 0;
}