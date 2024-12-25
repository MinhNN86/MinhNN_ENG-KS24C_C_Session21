#include <stdio.h>
#include <string.h>

struct sinhVien{
    int id;
    char name[100];
    int age;
};
typedef struct sinhVien sinhVien;
int main(){
    int soLuongSinhVien;
    printf("nhap so luong sinh vien: ");
    scanf("%d", &soLuongSinhVien);
    sinhVien user[soLuongSinhVien];
    for(int i = 0; i < soLuongSinhVien; i++){
        user[i].id = i + 1;
        printf("nhap ten sinh vien id %d: ", i + 1);
        fflush(stdin);
        fgets(user[i].name, sizeof(user[i].name), stdin);
        user[i].name[strlen(user[i].name) - 1] = '\0';
        fflush(stdin);
        printf("nhap tuoi sinh vien id %d: ", i + 1);
        scanf("%d", &user[i].age);
    }
    FILE *f = fopen("students.txt","w");
    if (f == NULL){
        printf("loi mo file ghi");
        return 1;
    }
    for(int i = 0; i < soLuongSinhVien; i++){
        fprintf(f, "id: %d | ten: %s | tuoi: %d\n", user[i].id, user[i].name, user[i].age);
    }
    fclose(f);
    printf("du lieu da duoc luu vao students.txt");
    return 0;
}